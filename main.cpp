#include <iostream>

using namespace std;

class BinaryTreeNode {
private:
    int value;
    BinaryTreeNode *left_node, *right_node;
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

    bool insert(int value) {
        if (root == nullptr) {
            root = new BinaryTreeNode(value);
            return true;
        }

        BinaryTreeNode *parent = root;
        BinaryTreeNode *child = root;

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
            parent->set_left(new BinaryTreeNode(value));
        else
            parent->set_right(new BinaryTreeNode(value));

        return true;
    }

    BinaryTreeNode *search(int value) {
        BinaryTreeNode *child = root;

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

        BinaryTreeNode *parent = root;
        BinaryTreeNode *child = root;

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
            else if (child->get_value() < parent->get_value())
                parent->set_left(nullptr);
            else
                parent->set_right(nullptr);

            return true;
        }

        // case 2 - remove child with 1 child
        if (child->get_left() != nullptr && child->get_right() == nullptr) {
            if (child->get_left()->get_left() != nullptr || child->get_left()->get_right() != nullptr) {
                parent->set_left(child->get_left());
            } else {
                int temp = child->get_left()->get_value();
                child->set_left(nullptr);
                child->set_value(temp);
            }

            return true;

        } else if (child->get_right() != nullptr && child->get_left() == nullptr) {
            if (child->get_right()->get_left() != nullptr || child->get_right()->get_right() != nullptr) {
                parent->set_right(child->get_right());
            } else {
                int temp = child->get_right()->get_value();
                child->set_right(nullptr);
                child->set_value(temp);
            }
            return true;
        }

        // case 3 - remove child with 2 child (biggest left hand)
        if (child->get_left() != nullptr && child->get_right() != nullptr) {
            BinaryTreeNode *parent_left_side = child->get_left();
            BinaryTreeNode *greatest_left_side = parent_left_side->get_right();

            if (greatest_left_side == nullptr) {
                child->set_value(parent_left_side->get_value());
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
                greatest_left_side->set_left(nullptr);
            } else {
                child->set_value(greatest_left_side->get_value());
                parent_left_side->set_right(nullptr);
            }

            return true;
        }

        return false;
    }


    void print();

};

int main() {
    auto root = new BinaryTree();

    root->insert(50);
    root->insert(25);
    root->insert(75);
    root->insert(60);

/*    auto node = root->search(28);
    if (node == nullptr)
        cout << "number did not find" << endl;
    else
        cout << "node found: " << node << endl;*/

    root->remove(75);

    return 0;
}
