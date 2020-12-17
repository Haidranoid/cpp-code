/*
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <set>

using namespace std;

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &person);

    std::string name;
    int age;
public:
    Person() : name("Unknown"), age{0} {}

    Person(std::string name, int age) : name{name}, age{age} {}

    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }

    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &person) {
    os << "{" << person.name << ":" << person.age << "}";
    return os;
}

// use template to list any vector type
template<typename T>
void display(const std::set<T> &set) {
    std::cout << "[";
    std::for_each(set.begin(), set.end(), [](T value) {
        std::cout << value << ",";
    });
    std::cout << "]" << std::endl;
}

void test1();

void test2();

void test3();

int main() {
    test1();
    test2();
    test3();
    return 0;
}

void test1() {
    cout << "\nTest 1 ======================================" << endl;
    set<int> set{1, 2, 3, 4, 5};
    display(set);

    set = {1, 2, 3, 1, 1, 2, 2, 3, 3, 4, 5};
    display(set);

    set.insert(0);
    set.insert(10);
    display(set);

    if (set.count(10))
        cout << "10 is in the set" << endl;
    else
        cout << "10 is NOT in the set" << endl;

    auto it = set.find(5);
    if (it != set.end())
        cout << "Found: " << *it << endl;

    set.clear();
    display(set);
}

void test2() {
    cout << "\nTest 2 ======================================" << endl;
    set<Person> set{
            {"Larry",1},
            {"Moe",2},
            {"Curly",3},
    };
    display(set);

    set.emplace("James", 50);
    display(set);

    set.emplace("James", 50);
    display(set);

    auto it = set.find(Person{"Moe", 2});
    if (it != set.end())
        set.erase(it);

    display(set);

    it = set.find(Person{"XXXX", 50});
    if (it != set.end())
        set.erase(it);

    display(set);

}

void test3() {
    cout << "\nTest 3 ======================================" << endl;
    set<char> set{'A', 'B', 'C'};
    display(set);

    auto result = set.emplace('D');
    display(set);

    cout << boolalpha;
    cout << "First: " << *result.first << endl;
    cout << "Second: " << result.second << endl;

    cout << endl;

    result = set.emplace('A');
    display(set);

    cout << boolalpha;
    cout << "First: " << *result.first << endl;
    cout << "Second: " << result.second << endl;

}*/
