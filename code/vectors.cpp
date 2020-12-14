/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &person);

    std::string name;
    int age;
public:
    Person() = default;

    Person(std::string name, int age) : name{name}, age{age} {}

    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }

    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &person) {
    os << person.name << ":" << person.age;
    return os;
}

// use for_each and lambda expression to display vector elements
void display2(const std::vector<int> &vector) {
    std::cout << "[ ";
    std::for_each(vector.begin(), vector.end(), [](int value) {
        std::cout << value << " ";
    });
    std::cout << "]" << std::endl;
}

// use template to display any vector type
template<typename T>
void display(const std::vector<T> &vector) {
    std::cout << "[ ";
    std::for_each(vector.begin(), vector.end(), [](T value) {
        std::cout << value << " ";
    });
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

void test10();

void test11();

int main() {
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    //test6();
    //test7();
    //test8();
    //test9();
    //test10();
    test11();
    return 0;
}

void test1() {
    std::cout << "Test 1 --------------------------------" << std::endl;
    std::vector<int> vec = {1, 2, 3, 4, 5};
    display(vec);

    vec = {2, 4, 5, 6};
    std::vector<int> vec3(10, 100);

    display(vec);
    display(vec3);
}

void test2() {
    std::cout << "Test 2 --------------------------------" << std::endl;
    std::vector<int> vec = {1, 2, 3, 4, 5};
    display(vec);

    std::cout << "vec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
    std::cout << std::endl;

    vec.push_back(6);
    display(vec);

    std::cout << "vec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
    std::cout << std::endl;

    vec.shrink_to_fit(); // C++11
    std::cout << "vec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
    std::cout << std::endl;

    vec.reserve(100);
    std::cout << "vec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
    std::cout << std::endl;

    vec.push_back(20);
    std::cout << "vec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
    std::cout << std::endl;

    vec.shrink_to_fit(); // C++11
    std::cout << "vec size: " << vec.size() << std::endl;
    std::cout << "vec max size: " << vec.max_size() << std::endl;
    std::cout << "vec capacity: " << vec.capacity() << std::endl;
    std::cout << std::endl;
}

void test3() {
    std::cout << "Test 3 --------------------------------" << std::endl;
    std::vector<int> vec = {1, 2, 3, 4, 5};
    display(vec);
    vec[0] = 1000;
    vec.at(1) = 2000;
    display(vec);

}

void test4() {
    std::cout << "Test 4 --------------------------------" << std::endl;

    std::vector<Person> vec;
    Person p1{"Larry", 18};
    display(vec);

    vec.push_back(p1);
    display(vec);

    vec.push_back({"Moe", 25});
    display(vec);

    vec.emplace_back("Curly", 30); // use emplace_back!!!
    display(vec);
}

void test5() {
    std::cout << "Test 5 --------------------------------" << std::endl;
    std::vector<Person> vec = {
            {"Larry", 18},
            {"Moe",   25},
            {"Curly", 30},
    };
    display(vec);

    std::cout << "\nFront: " << vec.front() << std::endl;
    std::cout << "Back: " << vec.back() << std::endl;
    vec.pop_back();
    display(vec);
}

void test6() {
    std::cout << "Test 6 --------------------------------" << std::endl;
    std::vector<int> vec = {1, 2, 3, 4, 5};
    display(vec);

    vec.clear();
    display(vec);

    vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(vec);

    vec.erase(vec.begin(), vec.begin() + 2);
    display(vec);

    vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // erase all even numbers

    std::vector<int>::iterator it = vec.begin();
    while (it != vec.end()) {
        if (*it % 2 == 0) {
            vec.erase(it);
        } else {
            it++; // only increment if nt erased
        }

    }
    display(vec);

}

void test7() {
    std::cout << "Test 7 --------------------------------" << std::endl;
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    display(vec1);

    std::vector<int> vec2 = {10, 20, 30, 40, 50};
    display(vec2);

    vec1.swap(vec2);
    std::cout << std::endl;

    display(vec1);
    display(vec2);
}

void test8() {
    std::cout << "Test 8 --------------------------------" << std::endl;
    std::vector<int> vec = {1, 21, 3, 40, 12};
    display(vec);

    std::sort(vec.begin(), vec.end());
    display(vec);
}

void test9() {
    std::cout << "Test 9 --------------------------------" << std::endl;
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {10, 20};

    display(vec1);
    display(vec2);
    std::cout << std::endl;

    //std::copy(vec1.begin(), vec1.end(), std::inserter(vec2,vec2.begin()));
    std::copy(vec1.begin(), vec1.end(), std::back_inserter(vec2));
    display(vec1);
    display(vec2);

    vec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vec2 = {10, 20};
    std::cout << std::endl;

    display(vec1);
    display(vec2);

    std::copy_if(vec1.begin(), vec1.end(), std::back_inserter(vec2), [](int value) {
        return value % 2 == 0;
    });

    std::cout << std::endl;

    display(vec1);
    display(vec2);
}

void test10() {
    std::cout << "Test 10 --------------------------------" << std::endl;
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {10, 20, 30, 40, 50};
    std::vector<int> vec3;

    std::transform(vec1.begin(), vec1.end(), vec2.begin(), std::back_inserter(vec3), [](int x, int y) {
        return x * y;
    });
    display(vec3);

}

void test11() {
    std::cout << "Test 11 --------------------------------" << std::endl;
    std::vector<int> vec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> vec2 = {100, 200, 300, 400};

    display(vec1);
    display(vec2);

    auto iterator = std::find(vec1.begin(), vec2.end(), 5);
    if (iterator != vec1.end()) {
        std::cout << "\ninserting..." << std::endl;
        vec1.insert(iterator, vec2.begin(), vec2.end());
    } else {
        std::cout << "Sorry, 5 not found" << std::endl;
    }
    display(vec1);
}
*/
