#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

using namespace std;

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
    map<string, string> map = {
            {"1", "Eduardo"},
            {"2", "Nestor"},
            {"3", "Avila"},
    };
    display(map);
}

int main() {
//    vectors();
//    lists();
    maps();
    return 0;
}
