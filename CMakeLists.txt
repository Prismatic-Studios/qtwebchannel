# Generated from qtwebchannel.pro.

cmake_minimum_required(VERSION 3.16)

include(.cmake.conf)
project(QtWebChannel
    VERSION "${QT_REPO_MODULE_VERSION}"
    DESCRIPTION "Qt WebChannel Libraries"
    HOMEPAGE_URL "https://qt.io/"
    LANGUAGES CXX C
)

# Make sure we use the fixed BASE argument of qt_add_resource.
set(QT_USE_FIXED_QT_ADD_RESOURCE_BASE TRUE)

find_package(Qt6 ${PROJECT_VERSION} CONFIG REQUIRED COMPONENTS BuildInternals Core) # special case
find_package(Qt6 ${PROJECT_VERSION} CONFIG OPTIONAL_COMPONENTS Concurrent Quick Test QuickTest WebSockets) # special case

if(INTEGRITY)
    message(NOTICE "Skipping the build as the condition \"NOT INTEGRITY\" is not met.")
    return()
endif()
qt_build_repo()
