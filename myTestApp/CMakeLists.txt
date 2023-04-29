set(SOURCES main.cpp)

add_executable(myTestApp ${SOURCES})

target_link_libraries(myTestApp PRIVATE myDynamicLib myStaticLib GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(myTestApp)
