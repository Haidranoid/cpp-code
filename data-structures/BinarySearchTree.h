#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include <iostream>

class BinarySearchTreeNode {
private:
    int value;
    BinarySearchTreeNode *left_node, *right_node;
public:
    BinarySearchTreeNode(int value = 0, BinarySearchTreeNode *left_node = nullptr, BinarySearchTreeNode *right_node = nullptr)
            : value{value}, left_node{left_node}, right_node{right_node} {
    }

    int get_value() const {
        return value;
    }

    void set_value(int v) {
        value = v;
    }

    BinarySearchTreeNode *get_left() const {
        return left_node;
    };

    void set_left(BinarySearchTreeNode *node) {
        left_node = node;
    };

    BinarySearchTreeNode *get_right() const {
        return right_node;
    };

    void set_right(BinarySearchTreeNode *node) {
        right_node = node;
    };
};

class BinarySearchTree {
private:
    BinarySearchTreeNode *root;
public:
    BinarySearchTree() {
        root = nullptr;
    }

    bool insert(int value) {
        if (root == nullptr) {
            root = new BinarySearchTreeNode(value);
            return true;
        }

        BinarySearchTreeNode *parent = root;
        BinarySearchTreeNode *child = root;

        while (child != nullptr) {
            parent = child;

            if (value < child->get_value())
                child = child->get_left();
            else if (value > child->get_value())
                child = child->get_right();
            else  // already exists in the tree
                return false;
        }

        if (value < parent->get_value())
            parent->set_left(new BinarySearchTreeNode(value));
        else
            parent->set_right(new BinarySearchTreeNode(value));

        return true;
    }

    BinarySearchTreeNode *search(int value) {
        BinarySearchTreeNode *child = root;

        while (child != nullptr) {
            if (value < child->get_value())
                child = child->get_left();
            else if (value > child->get_value())
                child = child->get_right();
            else
                return child;
        }

        return child; //nullptr
    }

    bool remove(int value) {
        if (root == nullptr)
            return false;

        BinarySearchTreeNode *parent = root;
        BinarySearchTreeNode *child = root;

        while (child->get_value() != value) {
            parent = child;

            if (value < child->get_value())
                child = child->get_left();
            else if (value > child->get_value())
                child = child->get_right();
            if (child == nullptr) // the value searched was not found
                return false;
        }

        // case 1 - remove a leaf
        if (child->get_left() == nullptr && child->get_right() == nullptr) {
            if (child == root)
                root = nullptr;
            else if (child->get_value() < parent->get_value()) {
                delete parent->get_left();
                parent->set_left(nullptr);
            } else {
                delete parent->get_right();
                parent->set_right(nullptr);
            }
            return true;
        }

        // case 2 - remove child with 1 child
        // TODO bug: if the child->get_left || child->get_right has some children
        if (child->get_left() != nullptr && child->get_right() == nullptr) {
            int temp = child->get_left()->get_value();
            child->set_value(temp);

            delete child->get_left();
            child->set_left(nullptr);

            return true;

        } else if (child->get_right() != nullptr && child->get_left() == nullptr) {
            int temp = child->get_right()->get_value();
            child->set_value(temp);

            delete child->get_right();
            child->set_right(nullptr);

            return true;
        }

        // case 3 - remove child with 2 child (biggest left hand)
        if (child->get_left() != nullptr && child->get_right() != nullptr) {
            BinarySearchTreeNode *parent_left_side = child->get_left();
            BinarySearchTreeNode *greatest_left_side = parent_left_side->get_right();

            if (greatest_left_side == nullptr) {
                child->set_value(parent_left_side->get_value());

                delete child->get_left();
                child->set_left(nullptr);

                return true;
            }

            while (greatest_left_side->get_right() != nullptr) {
                parent_left_side = greatest_left_side;
                greatest_left_side = greatest_left_side->get_right();
            }

            if (greatest_left_side->get_left() != nullptr) {
                child->set_value(greatest_left_side->get_value());
                greatest_left_side->set_value(greatest_left_side->get_left()->get_value());

                delete greatest_left_side->get_left();
                greatest_left_side->set_left(nullptr);
            } else {
                child->set_value(greatest_left_side->get_value());

                delete parent_left_side->get_right();
                parent_left_side->set_right(nullptr);
            }

            return true;
        }

        return false;
    }

    void print();

};

#endif //BINARYSEARCHTREE_H
