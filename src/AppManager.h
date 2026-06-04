#ifndef APPMANAGER_H
#define APPMANAGER_H

#include "ForexFactory.h"
#include "PhaseFactory.h"
#include "AssetsFactory.h"

class AppManager {
    public:
    // initialise UI
    AppManager();

    void setupForexTab();
    void setupAssetsTab();
    void setupPhasesTab();
    void start();
};



#endif //APPMANAGER_H
