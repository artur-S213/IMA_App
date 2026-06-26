#ifndef ABSTRACT_IMA_FACTORY_H
#define ABSTRACT_IMA_FACTORY_H

#include "IMAModelView.h"
#include <memory>
#include "dexode/EventBus.hpp"
#include <slint.h>

class AppWindow;

class AbstractIMAFactory {
    public:
    virtual std::unique_ptr<IMAModelView> createModelView();

};

#endif