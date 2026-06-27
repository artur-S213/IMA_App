add_library(AssetsTab STATIC
        AssetsFactory.h
        AssetsFactory.cpp
        AssetsManager.h
        AssetsManager.cpp
)

target_include_directories(AssetsTab PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
