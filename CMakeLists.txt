cmake_minimum_required(VERSION 3.8)
project(MyProject VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

#### GTEST

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

#### END GTEST

include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(myDynamicLib)
add_subdirectory(myStaticLib)
add_subdirectory(myApp)
add_subdirectory(myTestApp)
