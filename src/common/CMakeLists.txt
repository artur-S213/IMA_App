add_library(CommonIMA INTERFACE)

target_link_libraries(CommonIMA INTERFACE
        Slint::Slint
        Dexode::EventBus
)

target_include_directories(CommonIMA
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
)