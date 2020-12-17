cmake_minimum_required(VERSION 3.15)
# if works as a submodule
#set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake
#        CACHE STRING "Vcpkg toolchain file")
project(cpp-course)

set(CMAKE_CXX_STANDARD 14)

#file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/test.txt
#        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/test.txt
        ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

#file(GLOB MY_FILES "*.txt")
#file(COPY ${MY_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

find_package(cpr CONFIG REQUIRED)

file(GLOB MY_CODE_FILES "code/*.cpp")
file(GLOB_RECURSE MY_CLASSES_FILES "classes/*.cpp" "classes/*.h")
file(GLOB MY_UTILS_FILES "utils/*.cpp" "utils/*.h")

add_executable(cpp-course main.cpp ${MY_CLASSES_FILES} ${MY_CODE_FILES} ${MY_UTILS_FILES} code/sets.cpp code/maps.cpp code/challenge_map&set.cpp code/stacks.cpp code/queues.cpp code/challenge_stack&queue.cpp code/challenge_priority_queue.cpp)

target_link_libraries(cpp-course PRIVATE cpr)