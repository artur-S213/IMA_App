#include "ForexFactory.h"
#include <memory>

#include "ForexModelView.h"
#include "IMAModelView.h"
#include "ForexStorage.h"
#include "dexode/EventBus.hpp"



std::unique_ptr<ForexStorageService> ForexFactory::createStorageService(std::shared_ptr<dexode::EventBus> bus) {
}

std::unique_ptr<ForexStorage> ForexFactory::createStorage() {
}

ForexCard ForexFactory::createForexCard(std::string id) {
}

EconomicEvent ForexFactory::createEconomicEvent(std::string card_id) {
}
