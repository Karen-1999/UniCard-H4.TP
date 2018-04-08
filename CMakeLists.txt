cmake_minimum_required(VERSION 3.0)
project(HomeTask4)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS -pthread)

set(SOURCE_LIST main.cpp IUniCard.h CUniCard.h IUniCardReader.h CPassportReader.h CPassportDecorator.h CPolisDecorator.h CPolisReader.h CSberbankDecorator.h CSberbankReader.h test.h)

if(WITH_TEST)
    add_definitions(-DWITH_TEST)
endif()

if(DEBUG)
    set(CMAKE_BUILD_TYPE Debug)
else()
    set(CMAKE_BUILD_TYPE Release)
endif()
find_package(GTest REQUIRED)
add_executable(HomeTask4 ${SOURCE_LIST})

target_link_libraries(HomeTask4 gtest gtest_main)