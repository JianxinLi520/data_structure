cmake_minimum_required(VERSION 3.21)
project(data_structure C)

set(CMAKE_C_STANDARD 99)

add_executable(data_structure main.c src/list/sequence_list.c src/list/sequence_list.h src/list/linked_list.h src/list/double_linked_list.h src/list/linked_list.c menu/sequence_list_menu.h menu/sequence_list_menu.c menu/home_menu.c menu/home_menu.h src/stack/sequence_stack.c src/stack/sequence_stack.h src/stack/linked_stack.c src/stack/linked_stack.h)
