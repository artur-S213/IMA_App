#ifndef FOREXSTORAGE_H
#define FOREXSTORAGE_H

#include <string>
#include <vector>
#include "EconomicEvent.h"
#include "ForexCard.h"
#include "IMA_types.h"


class ForexStorage {

    private:
    std::vector<ForexCard> cards; //hier evtl- lieber hashmap oder so ...


    public:
    // ForexStorage(std::vector<std::string> values);
    ForexStorage();
    ForexCardRecord createCard(std::string currency);
    ForexCardRecord updateCard(std::string id);
    void createEconomicEvent(std::string card_id);
    void updateEconomicEvent();
};



#endif //FOREXSTORAGE_H
