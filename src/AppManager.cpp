#include "AppManager.h"


class AppWindow;

AppManager::AppManager() {
    this->m_bus = std::make_shared<dexode::EventBus>();
    this->m_ui = AppWindow::create();
}

void AppManager::setupForexTab() {

}

void AppManager::setupAssetsTab() {
}

void AppManager::setupPhasesTab() {
}

void AppManager::start() {
}
