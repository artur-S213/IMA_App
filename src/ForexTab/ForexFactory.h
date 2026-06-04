#ifndef FOREX_FACTORY_H
#define FOREX_FACTORY_H

#include "IMAModelView.h"
#include "ForexModelView.h"
#include "ForexStorage.h"
#include <memory>

class ForexFactory : public AbstractIMAFactory {


    public:
    static std::unique_ptr<IMAModelView> createModelView() override;
    static std::unique_ptr<ForexStorage> createStorage();

};

#endif