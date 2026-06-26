#ifndef IMA_MODELVIEW_H
#define IMA_MODELVIEW_H

#include "IMA_types.h"
#include <slint.h>
#include "app-window.h"
// #include <memory>

class IMAModelView {

    public:
    virtual void updateUI(const IMA_Record newValues);
    virtual void set_UI (slint::ComponentHandle<AppWindow>)
};

#endif