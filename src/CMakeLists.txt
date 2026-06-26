

# include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_subdirectory(common)
add_subdirectory(ForexTab)
add_subdirectory(AssetsTab)
add_subdirectory(PhaseTab)

add_executable(IMA
        main.cpp
        AppManager.h
        AppManager.cpp
)

slint_target_sources(IMA ui/app-window.slint)

target_link_libraries(IMA PRIVATE
        Slint::Slint
        Dexode::EventBus
        CommonIMA
        ForexTab
        AssetsTab
        PhaseTab
)

target_include_directories(IMA PRIVATE ${CMAKE_CURRENT_BINARY_DIR})



