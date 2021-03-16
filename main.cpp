#include <iostream>
#include <map>
#include <string>

using namespace std;

class TrieNode {
private:
    map<char, TrieNode *> table;
    bool is_word;
public:
    TrieNode() {
        is_word = false;
    }

    map<char, TrieNode *> get_table() {
        return table;
    }

    bool get_is_word() {
        return is_word;
    }

    void set_is_word(bool state) {
        this->is_word = state;
    }
};

class Trie {
private:
    TrieNode *root;
public:
    Trie() {
        root = new TrieNode();
    }

    bool insert(string word) {
        auto current_node = root;

        for (char c:word) {
            current_node->get_table()[c] = new TrieNode();
        }
    }
};

int main() {

    return 0;
}
