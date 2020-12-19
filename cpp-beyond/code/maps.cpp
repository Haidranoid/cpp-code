/*#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <map>
#include <set>

using namespace std;

void display(const std::map<string, set<int>> &map) {
    std::cout << "[ ";
    std::for_each(map.begin(), map.end(), [](const pair<string, set<int>> &pair) {
        std::cout << pair.first << ":" << "[ ";

        std::for_each(pair.second.begin(), pair.second.end(), [](const int &value) {
            std::cout << value << " ";
        });

        std::cout << "] ";
    });
    std::cout << "]" << std::endl;
}

template<typename T1, typename T2>
void display(const std::map<T1, T2> &map) {
    std::cout << "[ ";
    std::for_each(map.begin(), map.end(), [](const pair<T1, T2> &value) {
        std::cout << value.first << ": " << value.second << " ";
    });
    std::cout << "]" << std::endl;
}

void test1();

void test2();

int main() {
    //test1();
    test2();
    return 0;
}

void test1() {
    cout << "\nTest 1 ======================================" << endl;
    map<string, int> m1{
            {"Curly", 2},
            {"Larry", 3},
            {"Moe",   1},
    };
    display(m1);

    m1.insert(pair<string, int>("Anna", 10));
    display(m1);

    m1.insert(make_pair("Joe", 10));
    display(m1);

    m1["Frank"] = 18;
    display(m1);

    m1["Frank"] += 10;
    display(m1);

    auto it = m1.find("Frank");
    if (it != m1.end())
        m1.erase(it);
    display(m1);

//    int count_joe = m1.count("Joe");
    cout << "Count for Joe: " << m1.count("Joe") << endl;

//    int count_frank = m1.count("Frank");
    cout << "Count for Frank: " << m1.count("Frank") << endl;

    it = m1.find("Larry");
    if (it != m1.end())
        cout << "Found: " << it->first << ": " << it->second << endl;
    else
        cout << "Not Found" << endl;

    m1.clear();

    display(m1);

}


void test2() {
    cout << "\nTest 2 ======================================" << endl;
    map<string, set<int>> m1{
            {"Curly", {80, 90, 100}},
            {"Larry", {90, 100}},
            {"Moe",   {94}},
    };
    display(m1);

    m1["Larry"].insert(95);
    display(m1);

    auto it = m1.find("Moe");
    if (it != m1.end())
        it->second.insert(1000);
    display(m1);
}*/
