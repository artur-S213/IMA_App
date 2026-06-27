#ifndef APPMANAGER_H
#define APPMANAGER_H

#include <slint.h>
#include <dexode/EventBus.hpp>
#include "ForexManager.h"
#include "AssetsManager.h"
#include  "PhaseManager.h"
#include "app-window.h"
class AppWindow;

class AppManager {

private:

    std::shared_ptr<dexode::EventBus> m_bus;
    slint::ComponentHandle<AppWindow> m_ui;
    std::unique_ptr<ForexManager> m_ForexManager;
    std::unique_ptr<AssetsManager> m_AssetsManager;
    std::unique_ptr<PhaseManager> m_PhaseManager;

public:
    // initialise UI
    AppManager();

    void setupForexTab();
    void setupAssetsTab();
    void setupPhasesTab();
    void start();
};



#endif //APPMANAGER_H
