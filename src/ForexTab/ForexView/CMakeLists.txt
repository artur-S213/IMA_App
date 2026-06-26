target_sources(ForexTab PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/ForexModelView.h
        ${CMAKE_CURRENT_SOURCE_DIR}/ForexModelView.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ForexCardDataModel.h
        ${CMAKE_CURRENT_SOURCE_DIR}/ForexCardDataModel.cpp
)

target_include_directories(ForexTab PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})