#include <iostream>
#include "classes/templates/array/Array.h"

int main() {

    Array<int, 5> nums;
    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(0);
    std::cout << "The size of nums is: " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;

    nums.fill(10);
    std::cout << nums << std::endl;

    nums[0] = 1000;
    nums[3] = 2000;
    std::cout << nums << std::endl;

    Array<int, 100> nums2{1};
    std::cout << "The size of nums2 is: " << nums2.get_size() << std::endl;
    std::cout << nums2 << std::endl;

    Array<std::string, 10> strings{"Frank"};
    std::cout << "The size of strings is: " << strings.get_size() << std::endl;
    std::cout << strings << std::endl;

    strings[0] = "Larry";
    std::cout << strings << std::endl;

    strings.fill("X");
    std::cout << strings << std::endl;


    return 0;
}

