/*
#include <iostream>
#include <queue>

using namespace std;

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &person);

    std::string name;
    int age;
public:
    Person() : name("Unknown"), age{0} {}

    Person(std::string name, int age) : name{name}, age{age} {}

    bool operator<(const Person &rhs) const {
//        return this->age < rhs.age;
        return this->name < rhs.name;
    }

    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &person) {
    os << "{" << person.name << ": " << person.age << "}";
    return os;
}

template<typename T>
void display(std::priority_queue<T> pq){
    cout << "[ ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "]" << endl;
}

void test1();

void test2();

int main() {
    test1();
    test2();

    return 0;
}

void test1() {
    std::cout << "Test 1 --------------------------------" << std::endl;
    std::priority_queue<int> pq;
    for (int i: {3, 5, 7, 12, 23, 12, 4, 100, 0, 3, 5, 7})
        pq.push(i);

    display(pq);

    cout << "Size: " << pq.size() << endl;
    cout << "Top: " << pq.top() << endl;

    pq.pop();

    display(pq);
}

void test2() {
    std::cout << "Test 2 --------------------------------" << std::endl;
    std::priority_queue<Person> pq;
    pq.emplace("A",10);
    pq.emplace("B",1);
    pq.emplace("C",14);
    pq.emplace("D",18);
    pq.emplace("E",7);
    pq.emplace("F",27);

    display(pq);

    cout << "Top: " << pq.top() << endl;
}*/