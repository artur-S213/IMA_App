#ifndef FOREXSTORAGE_H
#define FOREXSTORAGE_H

#include <string>
#include <vector>
#include "ForexCard.h"
#include "IMA_types.h"
#include <unordered_map>


class ForexStorage {

    private:
    // std::vector<ForexCard> cards; //hier evtl- lieber hashmap oder so ...
    std::unordered_map<std::string, ForexCard> cards;

    public:
    // ForexStorage(std::vector<std::string> values);
    ForexStorage();
    ForexCardRecord createCard(std::string currency);
    ForexCardRecord updateCard(std::string id);
    void createEconomicEvent(std::string card_id);
    void updateEconomicEvent(std::string card_id);
};



#endif //FOREXSTORAGE_H
