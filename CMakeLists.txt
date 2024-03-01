cmake_minimum_required(VERSION 3.17)

project(
  CardBettingGameEngine
  VERSION 1.0
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

include_directories(game)
include_directories(players)

add_executable(main main.cc)
target_link_libraries(main PUBLIC game players)
