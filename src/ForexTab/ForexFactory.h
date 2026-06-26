#ifndef FOREX_FACTORY_H
#define FOREX_FACTORY_H

#include <memory>
#include <slint.h>
#include "AbstractIMAFactory.h"
#include "ForexStorage.h"
#include "ForexStorageService.h"
#include "IMAModelView.h"
#include "dexode/EventBus.hpp"

class ForexFactory : public AbstractIMAFactory {


    public:
    std::unique_ptr<IMAModelView> createModelView() override;

    static std::unique_ptr<ForexStorageService> createStorageService(std::shared_ptr<dexode::EventBus> bus);

    static std::unique_ptr<ForexStorage> createStorage();

    static ForexCard createForexCard(std::string id);

    static EconomicEvent createEconomicEvent(std::string card_id);
};

#endif