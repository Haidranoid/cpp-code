/*
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include "classes/templates/Item.h"

int main() {
    Item<int> item1{"Frank", 100};
    std::cout << item1.get_name() << " " << item1.get_value() << std::endl;

    Item<std::string> item2{"Frank", "Professor"};
    std::cout << item2.get_name() << " " << item2.get_value() << std::endl;

    Item<Item<std::string>> item3{"Frank", {"C++", "Professor"}};
    std::cout << item3.get_name() << " "
              << item3.get_value().get_name() << " "
              << item3.get_value().get_value() << std::endl;

    std::cout << "\n----------------------------------" << std::endl;

    std::vector<Item<double>> vec{};
    vec.push_back(Item<double>{"Larry", 100.0});
    vec.push_back(Item<double>{"Moe", 200.0});
    vec.push_back(Item<double>{"Curly", 300.0});

    for (const Item<double> &item: vec)
        std::cout << item.get_name() << " " << item.get_value() << std::endl;


    std::cout << "\n----------------------------------" << std::endl;

    std::pair<std::string, int> pair{"Frank", 100};

    My_Pair<std::string, int> p1{"Frank", 100};
    My_Pair<int, double> p2{124, 13.6};


    std::cout << p1.first << ", " << p1.second << std::endl;  // Frank
    std::cout << p2.first<< ", " << p2.second << std::endl;  // Frank

    return 0;
}

*/
