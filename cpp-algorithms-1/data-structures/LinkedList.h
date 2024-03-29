//
// Created by Haidranoid on 15/03/2021.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <string>

using namespace std;

class LinkedListNode {
private:
    string value;
    LinkedListNode *next;
public:
    LinkedListNode(string v, LinkedListNode *next = nullptr)
            : value{v}, next{next} {
    }

    string get_value() const {
        return value;
    }

    void set_value(string v) {
        value = v;
    }

    LinkedListNode *get_next() {
        return next;
    };

    void set_next(LinkedListNode *node) {
        next = node;
    }
};

class LinkedList {
private:
    LinkedListNode *head;
public:
    LinkedList() {
        head = nullptr;
    }

    void insert(string v) {
        head = new LinkedListNode(v, head);
    }

    LinkedListNode *search(string v) {
        for (auto it = head; it != nullptr; it = it->get_next())
            if (it->get_value() == v)
                return it;

        return nullptr; // it == nullptr
    }

    bool remove(string v) {
        if (head == nullptr)
            return false;
        else if (head->get_value() == v) {
            auto next_node = head->get_next();
            delete head;
            head = next_node;

            return true;
        }

        LinkedListNode *previous_node = head;
        LinkedListNode *current_node = head->get_next();

        while (current_node != nullptr) {
            if (current_node->get_value() == v) {
                previous_node->set_next(current_node->get_next());
                delete current_node;
                return true;
            }
            previous_node = current_node;
            current_node = current_node->get_next();
        }

        return false;
    }

    void print() {
        cout << "[ ";
        for (auto it = head; it != nullptr; it = it->get_next())
            cout << it->get_value() << " ";
        cout << "]" << endl;
    }
};
#endif //LINKEDLIST_H
