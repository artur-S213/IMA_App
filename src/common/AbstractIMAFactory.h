#ifndef ABSTRACT_IMA_FACTORY_H
#define ABSTRACT_IMA_FACTORY_H

#include "IMAModelView.h"
#include <memory>

class AbstractIMAFactory {
    public:
    virtual std::unique_ptr<IMAModelView> createModelView();

};

#endif