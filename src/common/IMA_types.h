#ifndef IMA_TYPES_H
#define IMA_TYPES_H


struct IMA_Record {

};

struct ForexValuesUpdate : IMA_Record {
    float initforexvalue;
    float final_bias;
};

struct ForexCardRecord : IMA_Record {};

struct EconomicEventRecord : IMA_Record {};


#endif