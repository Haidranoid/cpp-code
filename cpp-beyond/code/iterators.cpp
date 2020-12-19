/*
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

// display any vector of integers using range-based for loop
void display(const std::vector<int> &vec) {
    std::cout << "[ ";
    for (auto const &i: vec) {
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}

void test1();

void test2();

void test3();

void test4();

void test5();

int main() {
    //test1();
    //test2();
    //test3();
    //test4();
    test5();
    return 0;
}


void test1() {
    std::cout << "\n--------------------------------------------" << std::endl;
    std::vector<int> nums1{1, 2, 3, 4, 5};
    //std::vector<int>::iterator it = nums1.begin();  // point to 1
    auto it = nums1.begin();  // point to 1
    std::cout << *it << std::endl;

    it++;  // point to 2
    std::cout << *it << std::endl;

    it += 2;  // point to 4
    std::cout << *it << std::endl;

    it -= 2;  // point to 2
    std::cout << *it << std::endl;

    it = nums1.end() - 1;
    std::cout << *it << std::endl;
}

void test2() {
    std::cout << "\n--------------------------------------------" << std::endl;
    // display all vector elements using an iterator

    std::vector<int> nums1{1, 2, 3, 4, 5};

    std::vector<int>::iterator it = nums1.begin();
    while (it != nums1.end()) {
        std::cout << *it << std::endl;
        it++;
    }

    // change all vector elements to 0
    it = nums1.begin();
    while (it != nums1.end()) {
        *it = 0;
        it++;
    }

    display(nums1);

}

void test3() {
    // using a const iterator
    std::cout << "\n--------------------------------------------" << std::endl;
    std::vector<int> nums1{1, 2, 3, 4, 5};

    std::vector<int>::const_iterator it = nums1.cbegin();
    //auto it = nums1.cbegin();

    while (it != nums1.end()) {
        std::cout << *it << std::endl;
        it++;
    }

    // compiler error when we try to change element
    it = nums1.begin();
    while (it != nums1.end()) {
        // *it = 0;  // Compiler error - read only
        it++;
    }

}

void test4() {
    // more iterators

    // using a reverse iterator
    std::cout << "\n--------------------------------------------" << std::endl;
    std::vector<int> nums{1, 2, 3, 4, 5};

    std::vector<int>::reverse_iterator it1 = nums.rbegin();
    //auto it = nums1.rbegin();

    while (it1 != nums.rend()) {
        std::cout << *it1 << std::endl;
        it1++;
    }


    // const reverse iterator over a list
    std::cout << "\n--------------------------------------------" << std::endl;
    std::list<std::string> names{"Larry", "Moe", "Curly"};
    std::list<std::string>::const_reverse_iterator it2 = names.crbegin();
    //auto it2 = names.crbegin();

    std::cout << *it2 << std::endl;
    it2++; // point to Moe
    std::cout << *it2 << std::endl;


    // iterator over a map
    std::cout << "\n--------------------------------------------" << std::endl;
    std::map<std::string, std::string> favorites{
            {"Frank", "C++"},
            {"Bill",  "Java"},
            {"Jame",  "Haskell"}
    };
    auto it3 = favorites.begin(); // iterator over map of string, string pairs
    while (it3 != favorites.end()) {
        std::cout << it3->first << " : " << it3->second << std::endl;
        it3++;
    }
}

void test5() {
    // iterate over a subset of a container
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    auto start = vec.begin() + 2;
    auto finish = vec.end() - 3;

    while (start != finish){
        std::cout << *start << std::endl;
        start++;
    }
}*/
