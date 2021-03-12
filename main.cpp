#include <iostream>

using namespace std;

class BinaryTreeNode {
private:
    int value;
    BinaryTreeNode *left_node;
    BinaryTreeNode *right_node;
public:
    BinaryTreeNode(int value = 0, BinaryTreeNode *left_node = nullptr, BinaryTreeNode *right_node = nullptr)
            : value{value}, left_node{left_node}, right_node{right_node} {
    }

    int get_value() const {
        return value;
    }

    void set_value(int v) {
        value = v;
    }

    BinaryTreeNode *get_left() const {
        return left_node;
    };

    void set_left(BinaryTreeNode *node) {
        left_node = node;
    };

    BinaryTreeNode *get_right() const {
        return right_node;
    };

    void set_right(BinaryTreeNode *node) {
        right_node = node;
    };
};

class BinaryTree {
private:
    BinaryTreeNode *root;
public:
    BinaryTree() {
        root = nullptr;
    }

    void insert(int value) {
        if (root == nullptr) {
            root = new BinaryTreeNode(value);
            return;
        }

        BinaryTreeNode *parent = root;
        BinaryTreeNode *current = root;
        while (current != nullptr) {
            parent = current;
            if (value < current->get_value()) {
                current = current->get_left();
            } else if (value > current->get_value()) {
                current = current->get_right();
            } else { // its equal
                return;
            }
        }

        if (value < parent->get_value()) {
            parent->set_left(new BinaryTreeNode(value));
        } else {
            parent->set_right(new BinaryTreeNode(value));
        }
    }

    BinaryTreeNode *search(int value) {
        BinaryTreeNode *current = root;
        while (current != nullptr) {
            if (value < current->get_value()) {
                current = current->get_left();
            } else if (value > current->get_value()) {
                current = current->get_right();
            } else {
                return current;
            }
        }

        return nullptr;
    }

    bool remove(int value){
        if (root == nullptr)
            return false;


        BinaryTreeNode *parent = root;
        BinaryTreeNode *current = root;

        while (current->get_value() != value) {
            parent = current;

            if (value < current->get_value()) {
                current = current->get_left();
            } else if (value > current->get_value()) {
                current = current->get_right();
            }

            if (current == nullptr)
                return false;
        }


        return false;
    }

    void print();
};

int main() {
    auto root = new BinaryTree();

    root->insert(20);
    root->insert(10);
    root->insert(30);

    root->insert(35);
    root->insert(32);
    root->insert(28);
    root->insert(29);

    auto node = root->search(28);
    if (node == nullptr)
        cout << "number did not find" << endl;
    else
        cout << "node found: " << node << endl;

    return 0;
}
