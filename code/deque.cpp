/*
#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <numeric>

// use template to display any vector type
template<typename T>
void display(const std::deque<T> &deque) {
    std::cout << "[ ";
    std::for_each(deque.begin(), deque.end(), [](T value) {
        std::cout << value << " ";
    });
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
    std::cout << "Test 1 --------------------------------" << std::endl;
    std::deque<int> deq = {1, 2, 3, 4, 5};
    display(deq);
    deq = {2, 4, 5, 6};
    display(deq);

    std::deque<int> deq1(10, 100);
    display(deq1);

    deq[0] = 100;
    deq.at(1) = 200;

    display(deq);
}

void test2() {
    std::cout << "Test 2 --------------------------------" << std::endl;
    std::deque<int> deq = {0, 0, 0};
    display(deq);

    deq.push_back(10);
    deq.push_back(20);
    display(deq);

    deq.push_front(100);
    deq.push_front(200);
    display(deq);

    std::cout << "Front: " << deq.front() << std::endl;
    std::cout << "Back: " << deq.back() << std::endl;
    std::cout << "Size: " << deq.size() << std::endl;

    deq.pop_back();
    deq.pop_front();
    display(deq);
}

void test3() {
    std::cout << "Test 3 --------------------------------" << std::endl;
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> deq;

    std::vector<int>::iterator it = vec.begin();
    while (it != vec.end()) {
        if (*it % 2 == 0) {
            deq.push_back(*it);
        } else {
            deq.push_front(*it);
        }
        it++;
    }
    display(deq);
}

void test4() {
    std::cout << "Test 4 --------------------------------" << std::endl;
    std::deque<int> deq = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    display(deq);
    std::reverse(deq.begin(), deq.end());
    display(deq);
}

void test5() {
    std::cout << "Test 5 --------------------------------" << std::endl;
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> deq;

    std::copy(vec.begin(), vec.end(), std::back_inserter(deq));
    display(deq);
    deq.clear();

    std::copy(vec.begin(), vec.end(), std::front_inserter(deq));
    display(deq);
    deq.clear();
}*/
