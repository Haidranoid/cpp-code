cmake_minimum_required(VERSION 3.15)
project(cpp-course)

set(CMAKE_CXX_STANDARD 14)

add_executable(pointers_and_references_review main.cpp
        code/arrays_and_pointers.cpp code/const_and_pointers.cpp
        code/functions_and_pointers.cpp code/references.cpp
        code/left_and_right_values.cpp classes/poo/player/Player.cpp
        classes/poo/player/Player.h classes/polymorphism/account-test/Account_Test.cpp
        classes/polymorphism/account-test/Account_Test.h code/constructors.cpp
        classes/poo/shallow/Shallow.cpp classes/poo/shallow/Shallow.h
        classes/poo/deep/Deep.cpp classes/poo/deep/Deep.h
        code/shallow_and_deep_copy.cpp
        classes/poo/move/Move.cpp classes/poo/move/Move.h
        code/move_constructor.cpp code/static_members_and_methods.cpp
        classes/poo/my-string/MyString.cpp classes/poo/my-string/MyString.h
        code/assignment_overload.cpp code/operator_overloading.cpp
        code/challenge_operator_overloading.cpp
        classes/polymorphism/account-test/Account_Test.h classes/polymorphism/account-test/Account_Test.cpp
        classes/polymorphism/saving-account-test/Saving_Account_Test.h classes/polymorphism/saving-account-test/Saving_Account_Test.cpp
        classes/poo/base/Base.cpp classes/poo/base/Base.h
        classes/poo/derived/Derived.cpp classes/poo/derived/Derived.h
        code/inheritance.cpp
        classes/polymorphism/account-2/Account2.cpp classes/polymorphism/account-2/Account2.h
        classes/polymorphism/saving-account-2/Saving_Account2.cpp classes/polymorphism/saving-account-2/Saving_Account2.h
        utils/Account_Util.cpp utils/Account_Util.h
        code/utility_functions_account.cpp classes/polymorphism/account/Account.cpp
        classes/polymorphism/account/Account.h classes/polymorphism/saving/Saving.cpp classes/polymorphism/saving/Saving.h classes/polymorphism/trust/Trust.cpp classes/polymorphism/trust/Trust.h classes/polymorphism/checking/Checking.cpp classes/polymorphism/checking/Checking.h code/challenge_inheritance.cpp code/polymorphism.cpp classes/abstract/shape/Shape.h classes/abstract/open-shape/Open_Shape.h classes/abstract/closed-shape/Closed_Shape.h classes/abstract/line/Line.cpp classes/abstract/line/Line.h classes/abstract/circle/Circle.cpp classes/abstract/circle/Circle.h classes/polymorphism/account-polymorphic/Account-Polymorphic.h classes/polymorphism/savings-polymorphic/Saving-Polymorphic.h classes/polymorphism/checking-polymorphic/Checking-Polymorphic.h classes/polymorphism/trust-polymorphic/Trust-Polymorphic.h classes/polymorphism/base-polymorphic/Base-Polymorphic.h classes/polymorphism/derived-polymorphic/Derived-Polymorphic.h classes/abstract/square/Square.cpp classes/abstract/square/Square.h classes/interfaces/interface-printable/Interface_Printable.h code/abstract.cpp classes/interfaces/interface-printable/Interface_Printable.cpp code/challenge_abstract_and_interfaces.cpp code/unique_pointers.cpp code/shared_pointers.cpp code/weak_pointers.cpp code/custom_deleters.cpp)