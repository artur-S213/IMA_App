#ifndef ECONOMICEVENT_H
#define ECONOMICEVENT_H

#include "IMA_types.h"
#include <string>

class EconomicEvent {
private:
    std::string id;
    std::string card_id;
    std::string name;
    ImpactOfEvent impact;
    float thread;
    float consensus;
    float actual;

public:
    EconomicEvent();

    // --- Getter

    std::string get_id() const;

    std::string get_card_id() const;

    std::string get_name() const;

    ImpactOfEvent get_impact() const;

    float get_consensus() const;

    float get_threshold() const;

    float get_actual() const;

    // --- Setter

    void set_id(std::string id);

    void set_card_id(std::string card_id);

    void set_name(std::string name);

    void set_impact(ImpactOfEvent impact);

    void set_threshold(float thread);

    void set_consensus(float consensus);

    void set_actual(float actual);
};



#endif //ECONOMICEVENT_H
