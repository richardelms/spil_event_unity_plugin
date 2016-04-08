using Newtonsoft.Json;
using System;
using System.Collections.Generic;

public static class JsonHelper
{
    public static T getObjectFromJson<T>(string jsonString) where T : new()
    {
        return JsonConvert.DeserializeObject<T>(jsonString);
    }

    public static string getJSONFromObject(object _object)
    {
        return JsonConvert.SerializeObject(_object);
    }
}

public class SpilResponse
{
    public string name;
    public string type;
    public string action;
    public string message;

    // The data field is not included here since it's object type varies between the different 
    // types of responses. Use the type field to identify the specific type of SpilResponse, 
    // then deserialize the JSON string again using that type. TODO: Make that prettier?
}

#region Rewards 

// TODO: These classes are based on the old OnReward handler code in Spil.cs
// Since the OnReward handler was deleted from Spil.cs because it was experimental
// these classes here may not actually represent a proper RewardResponse JSON string.
// When we actually do start using the OnReward handler and know what a proper
// RewardResponse JSON string will look like update these classes!!

// Example reward JSON string (contains RewardResponse object): "{ \"name\":\"reward\",\"action\":\"receive\",\"type\":\"reward\",\"data\":{ \"eventData\":{ \"currencyName\":\"Coins\",\"currencyId\":\"coins\",\"reward\":\"50\"} } }";

public class RewardResponse : SpilResponse
{
    public RewardEventData data;
}

public class RewardEventData
{
    public RewardData eventData;
}

public class RewardData
{
    public string currencyName;
    public string currencyId;
    public int reward;
}

#endregion

#region Packages

// Example Packages JSON string (contains PackagesResponse object ) "{\"name\": \"packages\",\"type\": \"packages\",\"action\": \"\",\"message\": \"\",\"data\": [{\"packages\":[{\"packageId\":\"87596\",\"items\":[{\"id\":\"13\",\"type\":\"CURRENCY\",\"value\":\"100\"},{\"id\":\"256\",\"type\":\"ITEM\",\"value\":\"2\"}],\"discountLabel\":\"35%\",\"hasPromotion\": \"false\" },{\"packageId\":\"87600\",\"items\":[{\"id\":\"14\",\"type\":\"CURRENCY\",\"value\":\"200\"}],\"discountLabel\":\"15%\",\"hasPromotion\": \"true\"}],\"promotions\":[{\"packageId\":\"87600\",\"items\":[ {\"id\":\"14\",\"type\":\"CURRENCY\",\"value\":\"400\"}],\"discountLabel\":\"30%\",\"startTime\":\"2016-01-02 01:02:03\",\"endTime\":\"2016-02-03 02:03:04\"}]}]}"
// This response is only received by SpilSDK, not by the unity plugin. The spil SDK splits the response 
// into packages and promotions and sends only the part of the response the Unity developer needs.
// Just added this for completion, hopefully in the future we can use a direct Java port of these classes 
// in the Android SpilSDK(?).

public class PackagesResponse : SpilResponse
{
    public List<PackagesData> data;

    public class PackagesData
    {
        public List<Package> packages;
        public List<Promotion> promotions;
    }

    // Example Promotions JSON string (contains single Promotion object): "{\"packageId\":\"87600\",\"items\":[{\"id\":\"14\",\"type\":\"CURRENCY\",\"value\":\"400\"}],\"discountLabel\":\"30%\",\"startTime\":\"2016-01-02 01:02:03\",\"endTime\":\"2016-02-03 02:03:04\"}"

    public class Promotion
    {
        public string packageId;
        public List<Item> items;
        public string discountLabel;
        //public DateTime startTime;
        //public DateTime endTime;

        public string startTime;
        public string endTime;
    }

    // Example packages JSON string (contains List<Packages>)): "[{ \"packageId\":\"87596\",\"items\":[{\"id\":\"13\",\"type\":\"CURRENCY\",\"value\":\"100\"},{\"id\":\"256\",\"type\":\"ITEM\",\"value\":\"2\"}],\"discountLabel\":\"35%\",\"hasPromotion\":false},{\"packageId\":\"87600\",\"items\":[{\"id\":\"14\",\"type\":\"CURRENCY\",\"value\":\"200\"}],\"discountLabel\":\"15%\",\"hasPromotion\":true}]"

    public class Package
    {
        public int packageId;
        public List<Item> items;
        public string discountLabel;
        public bool hasPromotion;
    }

    public class Item
    {
        public int id;
        public string type;
        public string value;
    }
}

#endregion

#region Config example

/* This is an example of a game config with all kinds of variables that can be tweaked to 
* balance a game without having to update it. 
* If you are making your own JSON files, be sure to use http://jsonlint.com/ to validate them!
{
    "Enemies":[
        {
            "Name":"Zombie",
            "HitPoints":"10",
            "Damage":"10",
            "AttackSpeed":"10",
            "WalkSpeed":"1",
            "CoinDropMinimum":"1",
            "CoinDropMaximum":"2",
            "LootLevel":"1",
            "DropChance":"50"
        },
        {
            "Name":"Skeleton",
            "HitPoints":"20",
            "Damage":"20",
            "AttackSpeed":"20",
            "WalkSpeed":"2",
            "CoinDropMinimum":"2",
            "CoinDropMaximum":"3",
            "LootLevel":"2",
            "DropChance":"25"
        },
        {
            "Name":"Demon",
            "HitPoints":"30",
            "Damage":"30",
            "AttackSpeed":"30",
            "WalkSpeed":"3",
            "CoinDropMinimum":"3",
            "CoinDropMaximum":"4",
            "LootLevel":"3",
            "DropChance":"100"
        }
    ],
    "Levels":[
        {
            "LevelNr":"1",
            "TimeLimit":"60",
            "LevelCompleteReward":"10",
            "Enemies":[
                {
                    "Name":"Zombie",
                    "AmountSpawnedMinimum":"2",
                    "AmountSpawnedMaximum":"3",
                    "SpawnChance":"50"
                },
                {
                    "Name":"Skeleton",
                    "AmountSpawnedMinimum":"1",
                    "AmountSpawnedMaximum":"2",
                    "SpawnChance":"35"
                },
                {
                    "Name":"Demon",
                    "AmountSpawnedMinimum":"1",
                    "AmountSpawnedMaximum":"1",
                    "SpawnChance":"15"
                }
            ],
            "LootContainerSpawnChance":"50",
            "LootContainerMinimumLevel":"1",
            "LootContainerMaximumLevel":"2"
        }
    ]
}
*/

// This is a class that mirrors the shape of the data in the JSON file.
// It can be used with the "GetConfigAsObject<T>()" method in Spil.cs to 
// retrieve SLOT game configs as objects like this: 
// GameConfig myConfig = GetConfigAsObject<GameConfig>();
//
// If you have your own JSON string you can turn it into an object in exactly the
// same way using "JsonHelper.getObjectFromJson<T>(string jsonString)" like this:
// MyCustomObject object = JsonHelper.getObjectFromJson<MyCustomObject>(string jsonString);
//
public class GameConfig
{
    public List<Enemy> Enemies;
    public List<Level> Levels;

    public class Enemy
    {
        public string Name;
        public int HitPoints;
        public int Damage;
        public int AttackSpeed;
        public int WalkSpeed;
        public int CoinDropMinimum;
        public int CoinDropMaximum;
        public int LootLevel;
        public int DropChance;
    }

    public class Level
    {
        public int LevelNr;
        public int TimeLimit;
        public int LevelCompleteReward;

        public List<EnemyLevelConfig> Enemies;

        public class EnemyLevelConfig
        {
            public string Name;
            public int AmountSpawnedMinimum;
            public int AmountSpawnedMaximum;
            public int SpawnChance;
        }

        public int LootContainerSpawnChance;
        public int LootContainerMinimumLevel;
        public int LootContainerMaximumLevel;
    }
}

#endregion