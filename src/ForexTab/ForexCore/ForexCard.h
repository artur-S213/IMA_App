#ifndef FOREXCARD_H
#define FOREXCARD_H

#include <string>
#include <vector>
#include <unordered_map>

#include "IMA_types.h"
#include "EconomicEvent.h"

class ForexCard {

private:
    std::string id;
    float yield_curve;
    COTValue cot;
    int strength;
    std::unordered_map<std::string, EconomicEvent> events;
    float initial_bias;
    float final_bias;

public:

    ForexCard(std::string);

    ~ForexCard() = default;

    // --- EconomicEvent handling

    EconomicEventRecord add_EconomicEvent();

    void delete_EconomicEvent(std::string id);

    ForexValuesUpdate update_EconomicEvent(std::string id);


    // --- other

    IMA_Record calculate_bias();

    // --- Getter
    std::string get_id() const;

    float get_yield_curve() const;

    COTValue get_cot() const;

    int get_strength() const;

    float get_initial_bias() const;

    float get_final_bias() const;

    // --- Setter
    void set_yield_curve(float yield_curve);

    void set_cot(COTValue cot);

    void set_strength(int strength);

    void set_initial_bias(float initial_bias);

    void set_final_bias(float final_bias);
};



#endif //FOREXCARD_H
