add_library(ForexTab STATIC
        ForexFactory.h
        ForexFactory.cpp
)

add_subdirectory(ForexView)
add_subdirectory(ForexCore)

target_link_libraries(ForexTab PRIVATE
    Slint::Slint
    CommonIMA
)

target_include_directories(ForexTab PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})