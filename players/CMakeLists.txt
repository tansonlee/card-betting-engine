add_library(players naive.cc)
target_include_directories(players PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(players PUBLIC game)
