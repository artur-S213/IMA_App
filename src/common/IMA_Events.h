#ifndef IMA_IMA_EVENTS_H
#define IMA_IMA_EVENTS_H

#include <vector>
#include <string>
#include "IMA_types.h"

#include "../../../../../../usr/include/c++/15/string"
#include "../../../../../../usr/include/c++/15/string"
#include "../../../../../../usr/include/c++/15/string"
#include "../../../../../../usr/include/c++/15/string"
#include "../../../../../../usr/include/c++/15/vector"


namespace ima_events {

    // base Event
    struct ForexEvent {
        std::string card_id;
    };


    struct CreateCards {
        std::vector<std::string> id_s;
    };

    // Events for Card
    struct ChangedYieldCurve {
        float value;
    };

    struct ChangedCOT {
        COTValue cot;
    };

    struct ChangedStrenght : public ForexEvent {
        int value;
    };


    // Events for Economic Event
    struct CreateEconomicEvent : public ForexEvent{
    };

    struct UpdateEconomicEvent : public ForexEvent{
        std::string eco_event_id;
    };

    struct DeleteEconomicEvent : ForexEvent {
        std::string eco_event_id;
    };


}

#endif //IMA_IMA_EVENTS_H
