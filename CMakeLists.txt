cmake_minimum_required(VERSION 3.15)
project(cpp-course)
set(CMAKE_CXX_STANDARD 14)

#========================= CPP BEYOND ====================================
#file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/test.txt
#        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

#configure_file(cpp-beyond/test.txt
#        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

#file(GLOB MY_FILES "*.txt")
#file(COPY ${MY_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

#file(GLOB MY_CODE_FILES "cpp-beyond/code/*.cpp")
#file(GLOB MY_UTILS_FILES "cpp-beyond/utils/*.cpp" "cpp-beyond/utils/*.h")
#file(GLOB_RECURSE CPP_BEYOND "cpp-beyond/*.cpp" "cpp-beyond/*.h")
#add_executable(cpp-course main.cpp ${CPP_BEYOND})

#========================= CPP ADVANCED ====================================
#file(GLOB_RECURSE CPP_ADVANCED "cpp-advanced/*.cpp" "cpp-advanced/*.h")
#add_executable(cpp-course main.cpp ${CPP_ADVANCED})

add_executable(cpp-course main.cpp algorithms/selection_sort.h algorithms/bubble_sort.h algorithms/recursion.h algorithms/merge_sort.h algorithms/quick_sort.h algorithms/compare.h algorithms/algorithms.cpp data-structures/BinarySearchTree.h)