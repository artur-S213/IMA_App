#include "ForexStorageService.h"

ForexStorageService::ForexStorageService(std::unique_ptr<ForexStorage> forex_storage)
        : m_ForexStorage(std::move(forex_storage)) {
}

void ForexStorageService::set_Eventbus(std::shared_ptr<dexode::EventBus> bus) {
        this->m_bus = bus;
        init_Listener();
}

void ForexStorageService::init_Listener() {
        this->listener = std::make_unique<dexode::EventBus::Listener>(m_bus);

        // Listener functions
        // this->listener->listen([](){});
}
