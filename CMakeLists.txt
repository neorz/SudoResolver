cmake_minimum_required(VERSION 3.10)

if(UNIT_TEST)

	add_subdirectory(test/)
	add_subdirectory(src/sudo_lib/)
	add_subdirectory(3rdparty/gtest/)


endif()


