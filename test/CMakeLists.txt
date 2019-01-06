project(main_test)

cmake_minimum_required(VERSION 3.10)



aux_source_directory(. TEST_SRCS)

add_executable(main ${TEST_SRCS})

target_link_libraries(main SudoLib gtest)


