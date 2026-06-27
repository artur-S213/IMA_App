#ifndef FOREXPRESENTER_H
#define FOREXPRESENTER_H


#include <slint.h> 
#include "app-window.h"
#include "IMAModelView.h"
#include "IMA_types.h"
#include  "ForexCardDataModel.h"
#include "dexode/EventBus.hpp"
class AppWindow;


class ForexModelView : public IMAModelView {

    private:
    slint::ComponentHandle<AppWindow> m_ui;
    // ForexCardDataModel* m_uiModel;
    std::shared_ptr<dexode::EventBus> m_bus;

    public:
    ForexModelView(slint::ComponentHandle<AppWindow> ui);
    ~ForexModelView();

    // void set_Model(ForexCardDataModel* model);

    void set_Bus(std::shared_ptr<dexode::EventBus> bus);

    void updateUI(const IMA_Record newValues) override;
};

#endif