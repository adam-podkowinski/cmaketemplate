cmake_minimum_required(VERSION 3.0.0)
project(sfmlrpg)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(SFML_DIR ./lib/SFML-2.5.1)
set(
	SRC_FILES
	src/main.cpp
	src/BUBLIB/bublib.cpp
	)

include_directories(include/)

add_subdirectory(./lib/SFML-2.5.1)

find_package(SFML 2.5.1 REQUIRED COMPONENTS graphics audio window system)

add_executable(sfmlrpg ${SRC_FILES})
target_link_libraries(sfmlrpg sfml-graphics sfml-audio sfml-window sfml-system)
