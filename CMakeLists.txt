cmake_minimum_required(VERSION 3.21)
project(data_structure C)

set(CMAKE_C_STANDARD 99)

add_executable(data_structure main.c src/list/sequence_list.c src/list/sequence_list.h src/list/linked_list.h src/list/double_linked_list.h src/list/linked_list.c menu/sequence_list_menu.h menu/sequence_list_menu.c menu/home_menu.c menu/home_menu.h src/stack/seq_stack.c src/stack/seq_stack.h src/stack/link_stack.c src/stack/link_stack.h src/queue/seq_queue.c src/queue/seq_queue.h src/queue/cir_queue.c src/queue/cir_queue.h src/queue/link_queue.c src/queue/link_queue.h src/glist/GList.c src/glist/GList.h src/tree/seq_binary_tree.c src/tree/seq_binary_tree.h src/tree/link_binary_tree.c src/tree/link_binary_tree.h menu/link_binary_tree_menu.c menu/link_binary_tree_menu.h src/tree/threaded_binary_tree.c src/tree/threaded_binary_tree.h)
