#ifndef IMA_TYPES_H
#define IMA_TYPES_H

#include <string>

struct IMA_Record {

};

enum COTValue {
    NEUTRAL,
    BULLISH,
    BEARISH
};

enum ImpactOfEvent {
    HIGH,
    MEDIUM,
    LOW
};

struct ForexCardRecord : IMA_Record {
    int strength;
    float yield_curve;
    float initial_bias;
    float final_bias;
    COTValue cot;
    std::string id;
};

struct ForexValuesUpdate : IMA_Record {
    float init_bias;
    float final_bias;
};

struct EconomicEventRecord : IMA_Record {
    float thread;
    float consensus;
    float actual;
    ImpactOfEvent impact;
    std::string id;
    std::string card_id;
    std::string name;
};



#endif