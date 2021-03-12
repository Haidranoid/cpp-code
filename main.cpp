#include <iostream>

using namespace std;

class BinaryTreeNode {
    friend BinaryTreeNode *find_value(BinaryTreeNode *root_node, int value);

    friend void insert_value(BinaryTreeNode *root_node, int value);

private:
    int value;
    BinaryTreeNode *left_node;
    BinaryTreeNode *right_node;
public:
    BinaryTreeNode(int value = 0, BinaryTreeNode *left_node = nullptr, BinaryTreeNode *right_node = nullptr)
            : value{value}, left_node{left_node}, right_node{right_node} {
    }

    int get_value() const {
        return this->value;
    }

    void set_value(int value) {
        this->value = value;
    }

    BinaryTreeNode *get_left_node() const {
        return this->left_node;
    };

    BinaryTreeNode *get_right_node() const {
        return this->right_node;
    };
};

void insert_value(BinaryTreeNode *root_node, int value) {
    BinaryTreeNode *left_node = root_node->get_left_node();
    BinaryTreeNode *right_node = root_node->get_right_node();

    if (left_node != nullptr)
        insert_value(left_node, value);

    if (right_node != nullptr)
        insert_value(right_node, value);

    if(value > root_node->get_value())
        left_node = new BinaryTreeNode(value);
    else
        right_node = new BinaryTreeNode(value);
}

BinaryTreeNode *find_value(BinaryTreeNode *root_node, int value) {
    BinaryTreeNode *left_node = root_node->get_left_node();
    BinaryTreeNode *right_node = root_node->get_right_node();

    if (root_node->get_value() == value)
        return root_node;

    if (left_node != nullptr && value < left_node->get_value())
        find_value(left_node, value);

    if (right_node != nullptr && value > right_node->get_value())
        find_value(right_node, value);

    return nullptr;
}

int main() {
    auto root = new BinaryTreeNode();
    cout << root->get_value() << endl;
    cout << root->get_left_node() << endl;
    cout << root->get_left_node() << endl;

    insert_value(root,20);
    insert_value(root,10);
    insert_value(root,30);
    insert_value(root,15);

    cout << root->get_value() << endl;
    cout << root->get_left_node()->get_value() << endl;
    cout << root->get_left_node()->get_value() << endl;


    return 0;
}
