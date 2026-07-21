#include "ForexFactory.h"
#include <memory>

#include "ForexModelView.h"
#include "ForexStorage.h"
#include "dexode/EventBus.hpp"



std::unique_ptr<ForexStorageService> ForexFactory::createStorageService(std::unique_ptr<ForexStorage> forex_storage) {
    auto service = std::make_unique<ForexStorageService>(std::move(forex_storage));
    return service;
}

std::unique_ptr<ForexStorage> ForexFactory::createStorage() {
    return std::make_unique<ForexStorage>();
}

ForexCard ForexFactory::createForexCard(std::string id) {
    return ForexCard(id);
}

EconomicEvent ForexFactory::createEconomicEvent(std::string card_id) {
    EconomicEvent event;
    event.set_card_id(card_id);
    // set here an id via UUID creater ...
    return event;
}

std::unique_ptr<IMAModelView> ForexFactory::createModelView(slint::ComponentHandle<AppWindow> ui) {
    // return AbstractIMAFactory::createModelView();
    return std::make_unique<ForexModelView>(ui);
}
