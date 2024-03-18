cmake_minimum_required(VERSION 3.21)
project(data_structure C)

set(CMAKE_C_STANDARD 99)

add_executable(data_structure main.c src/list/sequence_list.c src/list/sequence_list.h src/list/linked_list.h src/list/double_linked_list.h src/list/linked_list.c src/menu/sequence_list_menu.h src/menu/sequence_list_menu.c src/menu/home_menu.c src/menu/home_menu.h)
