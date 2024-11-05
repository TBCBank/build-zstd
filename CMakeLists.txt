cmake_minimum_required(VERSION 3.30)

project(ZstdCMake)

find_package(zstd CONFIG REQUIRED)

add_executable(ZstdCMake hello.cpp)

target_link_libraries(ZstdCMake PRIVATE zstd::libzstd_shared)
