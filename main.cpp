#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <iterator> // for std::advance

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
void display(const std::list<T> &list) {
    std::cout << "[";
    std::for_each(list.begin(), list.end(), [](T value) {
        std::cout << value << ",";
    });
    std::cout << "]" << std::endl;
}

void test1();

void test2();

void test3();

void test4();

void test5();

void test6();

int main() {
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    test6();
    return 0;
}

void test1() {
    std::cout << "Test 1 --------------------------------" << std::endl;
    std::list<int> list{1, 2, 3, 4, 5};
    display(list);

    std::list<std::string> list1;
    list1.push_back("Back");
    list1.push_front("Front");
    display(list1);

    std::list<int> list2;
    list2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(list2);

    list2 = {5, 10};
    display(list2);

    std::list<int> list3(10, 100);
    display(list3);
}

void test2() {
    std::cout << "Test 2 --------------------------------" << std::endl;

    std::list<int> list{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(list);
    std::cout << "Size: " << list.size() << std::endl;

    std::cout << "Front: " << list.front() << std::endl;
    std::cout << "Back: " << list.back() << std::endl;

    list.clear();
    display(list);

    std::cout << "Size: " << list.size() << std::endl;
}

void test3() {
    std::cout << "Test 3 --------------------------------" << std::endl;
    std::list<int> list{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(list);

    list.resize(5);
    display(list);

    list.resize(10);
    display(list);

    std::list<Person> persons;
    persons.resize(5); // uses the Person default constructor
    display(persons);
}

void test4() {
    std::cout << "Test 4 --------------------------------" << std::endl;

    std::list<int> list{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(list);

    auto it = std::find(list.begin(), list.end(), 5);
    if (it != list.end())
        list.insert(it, 100);
    display(list);

    std::list<int> list1{1000, 2000, 3000};
    list.insert(it, list1.begin(), list1.end());
    display(list);

    std::advance(it, -4); // point to the 100
    std::cout << *it << std::endl;

    list.erase(it); // remove the 100 - iterator becomes invalid
    display(list);
}

void test5() {
    std::cout << "Test 5 --------------------------------" << std::endl;

    std::list<Person> list{
            {"Larry", 18},
            {"Moe",   25},
            {"Curly", 17}
    };
    display(list);

    string name;
    int age = 0;

    std::cout << "\nEnter the name of the next stooge: ";
    getline(cin, name);
    std::cout << "Enter their age: ";
    cin >> age;

    list.emplace_back(name, age);
    display(list);

    auto it = std::find(list.begin(), list.end(), Person{"Moe", 25});
    if (it != list.end())
        list.emplace(it, "Frank", 19);

    display(list);
}

void test6(){
    std::cout << "Test 6 --------------------------------" << std::endl;

    std::list<Person> list{
            {"Larry", 18},
            {"Moe",   25},
            {"Curly", 17}
    };
    display(list);

    list.sort();
    display(list);
}