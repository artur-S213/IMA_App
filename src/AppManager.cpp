#include "AppManager.h"


class AppWindow;

AppManager::AppManager() {
    this->m_bus = std::make_shared<dexode::EventBus>();
    this->m_ui = AppWindow::create();
}

void AppManager::setupForexTab() {
    this->m_ForexManager = std::make_unique<ForexManager>(m_bus, m_ui);
    this->m_ForexManager->setup();
}

void AppManager::setupAssetsTab() {
}

void AppManager::setupPhasesTab() {
}

void AppManager::start() {
    this->m_ui.run();
}
