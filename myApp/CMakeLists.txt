set(SOURCES main.cpp)

find_package(Boost COMPONENTS regex filesystem REQUIRED)

add_executable(myApp ${SOURCES})

target_link_libraries(myApp PRIVATE myDynamicLib myStaticLib Boost::regex Boost::filesystem)
