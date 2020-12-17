/*
#include <iostream>
#include <queue>
#include <vector>
#include <list>

using namespace std;

// this function displays a queue of
// by repeatedly topping and popping the queue
// Note theat the queue is passed in value so we
// don't affect the passed in queue

template<typename T>
void display(queue<T> queue) {
    std::cout << "[ ";
    while (!queue.empty()) {
        T element = queue.front();
        queue.pop();
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::queue<int> queue; // defaults deque
    std::queue<int, list<int>> queue2;
    std::queue<int, deque<int>> queue3;

    for (int i: {1, 2, 3, 4, 5})
        queue.push(i);
    display(queue);
    cout << "Front: " << queue.front() << endl;
    cout << "Back: " << queue.back() << endl;

    queue.push(100);
    display(queue);

    queue.pop();
    queue.pop();
    display(queue);


    while (!queue.empty())
        queue.pop();
    display(queue);

    cout << "Size: " << queue.size() << endl;

    queue.push(10);
    queue.push(100);
    queue.push(1000);
    display(queue);

    cout << "Front: " << queue.front() << endl;
    cout << "Back: " << queue.back() << endl;

    queue.front() = 5;
    queue.back() = 5000;
    display(queue);

    cout << "Front: " << queue.front() << endl;
    cout << "Back: " << queue.back() << endl;

    return 0;
}
*/
