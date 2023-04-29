set(SOURCES myStaticLib.cpp)

add_library(myStaticLib STATIC ${SOURCES})

target_include_directories(myStaticLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS myStaticLib DESTINATION lib)