target_sources(ForexTab PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/ForexStorage.h
        ${CMAKE_CURRENT_SOURCE_DIR}/ForexStorage.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ForexCard.h
        ${CMAKE_CURRENT_SOURCE_DIR}/ForexCard.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/EconomicEvent.h
        ${CMAKE_CURRENT_SOURCE_DIR}/EconomicEvent.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ForexStorageService.h
        ${CMAKE_CURRENT_SOURCE_DIR}/ForexStorageService.cpp
)

target_include_directories(ForexTab PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})