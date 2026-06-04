#ifndef FOREXSTORAGE_H
#define FOREXSTORAGE_H

#include "EconomicEvent.h"
#include "ForexCard.h"
#include "IMA_types.h"


class ForexStorage {

    private:
    std::vector<ForexCard> cards;
    std::vector<EconomicEvent> events;

    public:
    ForexStorage(std::string[] values);
    ForexStorage();
    ForexCardRecord createCard(std::string currency);
    ForexCardRecord updateCard(std::string id);
    void createEconomicEvent(std::string card-id);
};



#endif //FOREXSTORAGE_H
