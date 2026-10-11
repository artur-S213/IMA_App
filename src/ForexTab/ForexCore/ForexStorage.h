#ifndef FOREXSTORAGE_H
#define FOREXSTORAGE_H

#include <string>
#include <vector>
#include "ForexCard.h"
#include "IMA_types.h"
#include <unordered_map>


class ForexStorage {

    private:
    std::unordered_map<std::string, ForexCard> cards;

    public:
    ForexStorage();
    ForexCardRecord createCard(std::string currency);
    ForexValuesUpdate updateCard(std::string id);
    EconomicEventRecord createEconomicEvent(std::string card_id);
    ForexValuesUpdate updateEconomicEvent(std::string card_id);
};



#endif //FOREXSTORAGE_H
