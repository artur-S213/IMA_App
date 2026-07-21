//
// Created by artur on 26.06.26.
//

#include "ForexManager.h"

ForexManager::ForexManager(std::shared_ptr<dexode::EventBus> bus, slint::ComponentHandle<AppWindow> &ui) : m_ui(ui) {
    this->m_bus = bus;
}

void ForexManager::setup() {
    // Setup ForexFactory
    this->m_ForexFactory = std::make_unique<ForexFactory>();

    // Setup Forex Modelview
    this->m_Modelview = m_ForexFactory->createModelView(m_ui);
    this->m_Modelview->set_Eventbus(m_bus);

    // Setup storage and service
    auto storage = m_ForexFactory->createStorage();
    this->m_service = m_ForexFactory->createStorageService(std::move(storage));
    this->m_service->set_Eventbus(m_bus);

    // Call functions for init values
    // ...
}
