cmake_minimum_required(VERSION 3.27)
project(racing_simulator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(RacingSimulator SHARED air_race.cpp air_vehicle.cpp all_terrain_boots.cpp broom.cpp camel.cpp
        centaur.cpp eagle.cpp land_race.cpp land_vehicle.cpp magic_carpet.cpp
        race.cpp speedboat_camel.cpp vehicle.cpp)

add_executable(racing_simulator main.cpp)

target_link_libraries(racing_simulator RacingSimulator)