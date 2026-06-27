#ifndef IMA_FOREXMANAGER_H
#define IMA_FOREXMANAGER_H

#include "ForexFactory.h"
#include <memory>
#include "../../external/EventBus/lib/src/dexode/EventBus.hpp"
#include "ForexCore/ForexStorageService.h"
#include "ForexView/ForexModelView.h"


class ForexManager {

private:
    std::unique_ptr<ForexFactory> m_ForexFactory;
    std::unique_ptr<ForexModelView> m_Modelview;
    std::unique_ptr<ForexStorageService> m_service;
    std::shared_ptr<dexode::EventBus> m_bus;
    slint::ComponentHandle<AppWindow>& m_ui;


public:
    ForexManager(std::shared_ptr<dexode::EventBus> bus, slint::ComponentHandle<AppWindow>& ui);
    void init();
};


#endif //IMA_FOREXMANAGER_H
