cmake_minimum_required(VERSION 3.31)
project(sedgwick C)

set(CMAKE_C_STANDARD 23cmake_minimum_required(VERSION 3.31)
project(sedgwick C)

set(CMAKE_C_STANDARD 23)

# Add Google Benchmark using FetchContent
include(FetchContent)
FetchContent_Declare(
  benchmark
  GIT_REPOSITORY https://github.com/google/benchmark.git
  GIT_TAG v1.8.0 # Replace with the desired version
)
FetchContent_MakeAvailable(benchmark)

add_executable(sedgwick main.c)

# Link Google Benchmark
target_link_libraries(sedgwick benchmark::benchmark))
