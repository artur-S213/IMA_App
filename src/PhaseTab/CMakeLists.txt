add_library(PhaseTab STATIC
        PhaseFactory.h
        PhaseFactory.cpp
        PhaseManager.h
        PhaseManager.cpp
)

target_include_directories(PhaseTab PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})