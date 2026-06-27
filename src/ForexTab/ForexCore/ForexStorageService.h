#ifndef IMA_FOREXSTORAGESERVICE_H
#define IMA_FOREXSTORAGESERVICE_H

#include <memory>

#include "ForexStorage.h"
#include "dexode/eventbus/perk/PerkEventBus.hpp"

class ForexStorageService {

private:
    ForexStorage& m_ForexStorage;
    std::shared_ptr<dexode::EventBus> m_bus;
    std::unique_ptr<dexode::EventBus::Listener> listener;

    void init_Listener();

public:
    ForexStorageService(ForexStorage &m_forex_storage);
    void set_Eventbus(std::shared_ptr<dexode::EventBus> bus);

};


#endif //IMA_FOREXSTORAGESERVICE_H
