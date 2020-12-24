#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>

using namespace std;

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &person) {
        os << "{ " << person.name << " : " << person.age << " }";
        return os;
    }
    friend bool compare_by_age(const Person &a, const Person &b);

private:
    string name;
    int age;
public:
    Person(string name, int age) : name(name), age(age) {
    }

    virtual ~Person() = default;

    bool operator<(const Person &person) const {
        return this->name < person.name;
    }

    bool operator==(const Person &person) const {
        return this->name == person.name;
    }
};

template<typename T>
void display(const vector<vector<T>> &vector) {
    std::for_each(vector.cbegin(), vector.cend(), [](const std::vector<T> inner_vector) {
        std::cout << "{ ";
        std::for_each(inner_vector.cbegin(), inner_vector.cend(), [](const T &x) {
            std::cout << x << " ";
        });
        std::cout << "} " << endl;

    });
}

template<typename T>
void display(const vector <T> &vector) {
    std::cout << "[ ";
    std::for_each(vector.cbegin(), vector.cend(), [](const T &x) {
        std::cout << x << " ";
    });
    std::cout << "]" << endl;
}

template<typename T>
void display(const list<T> &list) {
    std::cout << "[ ";
    for_each(list.cbegin(), list.cend(), [](const T &x) {
        std::cout << x << " ";
    });
    std::cout << "]" << endl;
}

template<typename T, typename K>
void display(const map<T, K> &map) {
    std::cout << "[ ";
    for_each(map.cbegin(), map.cend(), [](const pair<T, K> &x) {
        std::cout << "{ " << x.first << " : " << x.second << " } ";
    });
    std::cout << "]" << endl;
}

template<typename T, typename K>
void display(const multimap<T, K> &multimap) {
    std::cout << "[ ";
    for_each(multimap.cbegin(), multimap.cend(), [](const pair<T, K> &x) {
        std::cout << "{ " << x.first << " : " << x.second << " } ";
    });
    std::cout << "]" << endl;
}

template<typename T>
void display(const set<T> &set) {
    std::cout << "[ ";
    for_each(set.cbegin(), set.cend(), [](const T &x) {
        std::cout << x << " ";
    });
    std::cout << "]" << endl;
}

template<typename T>
void display(stack<T> stack) {
    while (!stack.empty()) {
        std::cout << "[ " << stack.top() << " ]" << endl;
        stack.pop();
    }
    cout << endl;
}

template<typename T>
void display(queue<T> queue) {
    while (!queue.empty()) {
        std::cout << "[ " << queue.front() << " ]" << endl;
        queue.pop();
    }
    cout << endl;
}

bool compare_by_age(const Person &a, const Person &b) {
    return a.age < b.age;
}

void vectors() {
    vector<string> strings(5, "X");

    strings.emplace_back("One");
    strings.emplace_back("Two");
    strings.emplace_back("Three");

    display(strings);

/*    auto it = strings.begin();

    while (it != strings.end()) {
        cout << *it << endl;
        it++;
    }*/

    cout << "Size: " << strings.size() << endl;
    cout << "Capacity: " << strings.capacity() << endl;

    strings.emplace_back("Four");
    strings.emplace_back("Five");
    strings.emplace_back("Six");

    cout << "Size: " << strings.size() << endl;
    cout << "Capacity: " << strings.capacity() << endl;

    strings.shrink_to_fit();
    cout << "shrinking.." << endl;

    cout << "Size: " << strings.size() << endl;
    cout << "Capacity: " << strings.capacity() << endl;

    cout << "------------ SORTING --------------" << endl;

    vector<Person> persons;
    persons.emplace_back("Mike", 5);
    persons.emplace_back("Sue", 10);
    persons.emplace_back("Raj", 7);
    persons.emplace_back("Vicky", 3);
    persons.emplace_back("Andy", 8);
    display(persons);

    sort(persons.begin(), persons.end());
    display(persons);

    sort(persons.begin(), persons.end(), compare_by_age);
    display(persons);
}

void twoDimensionalVectors() {
    vector<vector<int>> grid(3, {1, 2, 3, 4, 5});
    grid[1].push_back(6);
    display(grid);
}

void lists() {
    list<int> numbers;
    // push back
    numbers.push_back(0);
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    // push front
    numbers.push_front(-1);
    numbers.push_front(-2);
    numbers.push_front(-3);

    display(numbers);

    // find the number 0
    auto it = find(numbers.begin(), numbers.end(), 0);
    // inserts a value in the position of iterator
    numbers.insert(it, 100);
    display(numbers);

    // erase the value of the position iterator (0)
    numbers.erase(it);
    display(numbers);
}

void maps() {
/*    map<string, string> map = {
            {"1", "Eduardo"},
            {"2", "Nestor"},
            {"3", "Avila"},
    };
    display(map);

    map.emplace("4", "Alonso");
    display(map);

    map.insert(make_pair("5", "Katarina"));
    display(map);

    map.insert(pair<string, string>("6", "Leona"));
    display(map);

    map["7"] = "Verenice";
    display(map);

    auto it = map.find("4");
    cout << it->second << endl;

    map.erase(it);
    display(map);*/

    map<int, Person> map = {
            {1, Person("Eduardo", 20)},
            {2, Person("Nestor", 20)},
            {3, Person("Avila", 20)},
    };
    display(map);
}

void multimaps() {
    multimap<int, string> lookup;
    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(10, "Vicky"));
    lookup.insert(make_pair(30, "Raj"));
    lookup.insert(make_pair(20, "Bob"));
    display(lookup);

    auto it = lookup.find(20);
    if (it != lookup.end()) {
        pair<int, string> found = *it;
        cout << found.first << " : " << found.second << endl;
    }

    int count = lookup.count(30);
    cout << count << endl;

}

void sets() {
    set<int> numbers{
            1, 2, 3, 4, 5
    };

    numbers.emplace(1);
    numbers.emplace(2);
    numbers.emplace(2);
    numbers.emplace(6);

    display(numbers);

    set<Person> persons{
            {"Eduardo",  20},
            {"Antuan",   10},
            {"Patricia", 30},
            {"Antuan",   40},
    };
    display(persons);
}

void stacks() {
    // LIFO - Last Input First Output
    stack<Person> stack_persons;
    stack_persons.push(Person{"Eduardo", 24});
    stack_persons.push(Person{"John", 25});
    stack_persons.push(Person{"Sue", 21});
    display(stack_persons);

    /*
     * THIS is invalid code! Object is destroyed
     * Person &p = stack_persons.top()
     * stack_persons.pop()
     * cout << p << endl;  // reference refers to destroyed object
    */

    Person p = stack_persons.top();
    cout << "Top: " << p << endl << endl;

    stack_persons.pop();
    display(stack_persons);
};

void queues() {
    // FIFO - First Input First Output
    queue<Person> queue_persons;
    queue_persons.push(Person{"Eduardo", 24});
    queue_persons.push(Person{"John", 25});
    queue_persons.push(Person{"Sue", 21});
    display(queue_persons);

    cout << "Front: " << queue_persons.front() << endl;
    cout << "Back: " << queue_persons.back() << endl << endl;

    queue_persons.pop();
    display(queue_persons);
}

int standard_templates_library() {
    vectors();
//    lists();
//    maps();
//    sets();
//    stacks();
//    queues();
    return 0;
}
