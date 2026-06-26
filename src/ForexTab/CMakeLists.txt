add_library(ForexTab STATIC
        ForexFactory.h
        ForexFactory.cpp
)

target_link_libraries(ForexTab PRIVATE
        Slint::Slint
        Dexode::EventBus
        CommonIMA
)

target_include_directories(ForexTab PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


add_subdirectory(ForexView)
add_subdirectory(ForexCore)