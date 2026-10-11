#include "ForexStorage.h"
#include "ForexFactory.h"

ForexStorage::ForexStorage() = default;

ForexCardRecord ForexStorage::createCard(std::string currency) {
    auto card_new = ForexFactory::createForexCard(currency);
    ForexCardRecord cardRecord = {
        .strength = card_new.get_strength(),
        .yield_curve = card_new.get_yield_curve(),
        .initial_bias = card_new.get_initial_bias(),
        .final_bias = card_new.get_final_bias(),
        .cot = card_new.get_cot(),
        .id = currency,
    };
    cards.emplace(currency, std::move(card_new));
    return cardRecord;
}

ForexValuesUpdate ForexStorage::updateCard(std::string id) {
}

EconomicEventRecord ForexStorage::createEconomicEvent(std::string card_id) {
    auto event = ForexFactory::createEconomicEvent(card_id);

}

ForexValuesUpdate ForexStorage::updateEconomicEvent(std::string card_id) {
}
