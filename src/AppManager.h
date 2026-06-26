#ifndef APPMANAGER_H
#define APPMANAGER_H

#include "ForexFactory.h"
#include "PhaseFactory.h"
#include "AssetsFactory.h"
#include <slint.h>
#include <dexode/EventBus.hpp>
#include "app-window.h"
class AppWindow;

class AppManager {

private:

    std::shared_ptr<dexode::EventBus> m_bus;
    slint::ComponentHandle<AppWindow> m_ui;

public:
    // initialise UI
    AppManager();

    void setupForexTab();
    void setupAssetsTab();
    void setupPhasesTab();
    void start();
};



#endif //APPMANAGER_H
