#ifndef IMA_FOREXSTORAGESERVICE_H
#define IMA_FOREXSTORAGESERVICE_H

#include "ForexStorage.h"

class ForexStorageService {

private:
    ForexStorage& m_ForexStorage;

public:
    ForexStorageService(ForexStorage &m_forex_storage);
};


#endif //IMA_FOREXSTORAGESERVICE_H
