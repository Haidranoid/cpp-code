/*
#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

void display(const std::array<int, 5> &array) {
    std::cout << "[ ";
    for (int i : array)
        std::cout << i << " ";
    std::cout << "]" << std::endl;
}

void test1();

void test2();

void test3();

void test4();

void test5();

void test6();

void test7();

void test8();

void test9();

int main() {
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    //test6();
    //test7();
    //test8();
    test9();
    return 0;
}


void test1() {
    std::cout << "Test 1 --------------------------------" << std::endl;
    std::array<int, 5> nums{1, 2, 3, 4, 5};
    display(nums);

    std::array<int, 5> nums2{};
    display(nums2);

    nums2 = {10, 20, 30, 40, 50};

    display(nums);
    display(nums2);

    std::cout << "Size of array 1 is: " << nums.max_size() << std::endl;
    std::cout << "Size of array 2 is: " << nums2.max_size() << std::endl;

    nums[0] = 1000;
    nums.at(1) = 2000;

    display(nums);

    std::cout << "Front of array 2 is " << nums2.front() << std::endl;
    std::cout << "Back of array 2 is " << nums2.back() << std::endl;

}

void test2() {
    std::cout << "Test 2 --------------------------------" << std::endl;
    std::array<int, 5> nums{1, 2, 3, 4, 5};
    std::array<int, 5> nums2{10, 20, 30, 40, 50};

    display(nums);
    display(nums2);

    nums.fill(0);

    display(nums);
    display(nums2);

    nums.swap(nums2);

    display(nums);
    display(nums2);
}

void test3() {
    std::cout << "Test 3 --------------------------------" << std::endl;
    std::array<int, 5> nums{1, 2, 3, 4, 5};

    int *ptr = nums.data();
    std::cout << ptr << std::endl;
    *ptr = 1000;

    display(nums);

}

void test4() {
    std::cout << "Test 4 --------------------------------" << std::endl;
    std::array<int, 5> nums{2, 1, 4, 5, 3};
    display(nums);
    std::sort(nums.begin(), nums.end());
    display(nums);
}

void test5() {
    std::cout << "Test 5 --------------------------------" << std::endl;
    std::array<int, 5> nums{2, 1, 4, 5, 3};

    std::cout << "min: " << *std::min_element(nums.begin(), nums.end()) << ", max: "
              << *std::max_element(nums.begin(), nums.end()) << std::endl;
}

void test6() {
    std::cout << "Test 6 --------------------------------" << std::endl;
    std::array<int, 5> nums{2, 1, 3, 3, 5};

    auto adjacent = std::adjacent_find(nums.begin(), nums.end());
    if (adjacent == nums.end()) {
        std::cout << "There is no adjacent elements: " << std::endl;
    } else {
        std::cout << "adjacent element: " << *adjacent << std::endl;
    }

}

void test7() {
    std::cout << "Test 7 --------------------------------" << std::endl;
    std::array<int, 5> nums{1, 2, 3, 4, 5};

    int sum = std::accumulate(nums.begin(), nums.end(), 0);
    std::cout << "Sum of the elemnt in array 1 is: " << sum << std::endl;
}

void test8() {
    std::cout << "Test 8 --------------------------------" << std::endl;
    std::array<int, 10> nums = {1, 2, 3, 1, 2, 3, 3, 3, 3, 3};

    */
/*int count = std::count_if(nums.begin(), nums.end(), [](int value) {
        return value == 3;
    });*//*

    int count = std::count(nums.begin(), nums.end(), 3);

    std::cout << "Found 3: " << count << " times" << std::endl;

}

void test9() {
    std::cout << "Test 9 --------------------------------" << std::endl;
    std::array<int, 10> nums = {1, 2, 3, 50, 60, 70, 80, 200, 300, 400};

    int count = std::count_if(nums.begin(), nums.end(), [](int value) {
        return value > 10 && value < 200;
    });

    std::cout << "Numbers matches between 10 and 200: " << count << " times" << std::endl;
}


*/
