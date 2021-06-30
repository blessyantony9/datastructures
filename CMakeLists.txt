cmake_minimum_required(VERSION 3.19)
project(datastructures C)

set(CMAKE_C_STANDARD 11)

add_executable(string_util src/string_utils/string_utils.c src/string_utils/string_utils.h src/string_utils/string_utils_test.c)
add_executable(stack src/datastructures/stack/stack.c src/datastructures/stack/stack.h src/datastructures/stack/stack_test.c)
add_executable(queue src/datastructures/queue/queue.c src/datastructures/queue/queue.h src/datastructures/queue/queue_test.c)
add_executable(circular_queue src/datastructures/circular_queue/circular_queue.c src/datastructures/circular_queue/circular_queue.h src/datastructures/circular_queue/circular_queue_test.c)
add_executable(linked_list src/datastructures/linked_list/linked_list.c src/datastructures/linked_list/linked_list.h src/datastructures/linked_list/linked_list_test.c src/datastructures/linked_list/linked_list_test.c)
add_executable(stack_using_linked_list src/datastructures/linked_list_applications/stack_using_linked_list.c)
add_executable(queue_using_linked_list src/datastructures/linked_list_applications/queue_using_linked_list.c)
add_executable(priority_queue src/datastructures/priority_queue/priority_queue.c src/datastructures/priority_queue/priority_queue.h src/datastructures/priority_queue/priority_queue_test.c)
