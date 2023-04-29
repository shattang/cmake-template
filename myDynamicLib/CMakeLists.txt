set(SOURCES myDynamicLib.cpp)

add_library(myDynamicLib SHARED ${SOURCES})

target_include_directories(myDynamicLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
