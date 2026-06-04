cmake_minimum_required(VERSION 3.21)
project(IMA LANGUAGES CXX)

find_package(Slint QUIET)
if (NOT Slint_FOUND)
  message("Slint could not be located in the CMake module search path. Downloading it from Git and building it locally")
  include(FetchContent)
  FetchContent_Declare(
    Slint
    GIT_REPOSITORY https://github.com/slint-ui/slint.git
    # `release/1` will auto-upgrade to the latest Slint >= 1.0.0 and < 2.0.0
    # `release/1.0` will auto-upgrade to the latest Slint >= 1.0.0 and < 1.1.0
    GIT_TAG release/1
    SOURCE_SUBDIR api/cpp
  )
  FetchContent_MakeAvailable(Slint)
endif (NOT Slint_FOUND)

if (TARGET Slint::Slint)
  get_target_property(SLINT_INC Slint::Slint INTERFACE_INCLUDE_DIRECTORIES)
  include_directories(${SLINT_INC})
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(src)

# add_executable(IMA src/main.cpp)
# target_link_libraries(IMA PRIVATE Slint::Slint)
# slint_target_sources(IMA ui/app-window.slint)


#install(TARGETS IMA
#  BUNDLE DESTINATION .
#  RUNTIME DESTINATION bin
#)

# Linux-spezifische Icons und Desktop-Starter
# if(UNIX AND NOT APPLE)
#     install(FILES icons/icon.png DESTINATION share/icons/hicolor/256x256/apps RENAME sdalcal.png)
# endif()

#######################################################################################################

## --- 3. CPACK KONFIGURATION (Das erzeugt die Installer) ---
#set(CPACK_PACKAGE_NAME "IMA")
#set(CPACK_PACKAGE_VENDOR "Artur")
#set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "This app gives users the possibility to calculate the analysis of global economic interrelationships.")
#set(CPACK_PACKAGE_VERSION "1.0.0")
#
## Windows Installer Einstellungen (NSIS)
#if(WIN32)
#    # add_custom_command(TARGET Sdalcal POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:Sdalcal> $<TARGET_FILE_DIR:Sdalcal> COMMAND_EXPAND_LISTS)
#    set(CPACK_GENERATOR "NSIS")
#    set(CPACK_PACKAGE_INSTALL_DIRECTORY "Sdalcal")
#
#elseif(UNIX AND NOT APPLE)
#    set(CPACK_GENERATOR "DEB;RPM")
#    set(CPACK_DEBIAN_PACKAGE_MAINTAINER "arthur.scheling@gmail.com")
#    set(CPACK_DEBIAN_PACKAGE_SECTION "utils")
#    set(CPACK_DEBIAN_PACKAGE_DEPENDS "libx11-6, libfontconfig1, libxkbcommon0")
#
#    set(CPACK_RPM_PACKAGE_LICENSE "GPLv3")
#    set(CPACK_RPM_PACKAGE_GROUP "Applications/Utils")
#
#elseif(APPLE)
#    set(CPACK_GENERATOR "DragNDrop")
#endif()
#
#include(CPack)


# On Windows, copy the Slint DLL next to the application binary so that it's found.
# if (WIN32)
#     add_custom_command(TARGET IMA POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:IMA> $<TARGET_FILE_DIR:IMA> COMMAND_EXPAND_LISTS)
# endif()
