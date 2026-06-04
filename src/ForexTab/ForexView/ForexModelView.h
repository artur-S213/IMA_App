#ifndef FOREXPRESENTER_H
#define FOREXPRESENTER_H


#include <slint.h> 
#include "app-window.h"
#include "IMAModelView.h"
#include "IMA_types.h"
// class AppWindow;


class ForexModelView : public IMAModelView {

    private:
    slint::ComponentHandle<AppWindow> m_ui;
    ForexCardDataModel* m_uiModel;

    public:
    ForexModelView(slint::ComponentHandle<AppWindow> ui);
    ~ForexModelView();

    void updateUI(const IMA_Record newValues) override;
};

#endif