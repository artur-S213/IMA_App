

# include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(IMA 
    main.cpp
)

slint_target_sources(IMA ui/app-window.slint)

target_link_libraries(IMA PRIVATE 
    Slint::Slint
    ForexTab
    AssetsTab
    PhaseTab
)

target_include_directories(IMA PRIVATE ${CMAKE_CURRENT_BINARY_DIR})


add_subdirectory(ForexTab)
add_subdirectory(AssetsTab)
add_subdirectory(PhaseTab)


