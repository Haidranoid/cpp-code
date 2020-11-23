cmake_minimum_required(VERSION 3.15)
project(cpp-course)

set(CMAKE_CXX_STANDARD 14)

add_executable(pointers_and_references_review main.cpp code/arrays_and_pointers.cpp code/const_and_pointers.cpp code/functions_and_pointers.cpp code/references.cpp code/left_and_right_values.cpp classes/player/Player.cpp classes/player/Player.h classes/account/Account.cpp classes/account/Account.h code/constructors.cpp classes/shallow/Shallow.cpp classes/shallow/Shallow.h classes/deep/Deep.cpp classes/deep/Deep.h code/shallow_and_deep_copy.cpp classes/move/Move.cpp classes/move/Move.h code/move_constructor.cpp code/static_members_and_methods.cpp classes/my-string/MyString.cpp classes/my-string/MyString.h code/assignment_overload.cpp code/operator_overloading.cpp)