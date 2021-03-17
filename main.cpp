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

    bool have_record(char c) {
        auto it = table.find(c);
        if (it != table.end())
            return true;
        return false;
    }

    bool is_empty() {
        return table.empty();
    }

    TrieNode *follow_char(char c) {
        return table[c];
    }

    void add_record(char c, TrieNode *n) {
        table[c] = n;
    }

    void delete_record(char c) {
        auto it = table.find(c);
        table.erase(it);
    }

    bool get_is_word() const {
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

    void insert(string word) {
        auto current_node = root;

        for (char c:word) {
            if (!current_node->have_record(c))
                current_node->add_record(c, new TrieNode);

            current_node = current_node->follow_char(c);
        }
        current_node->set_is_word(true);
    }

    bool search(string word) {
        if (root->is_empty())
            return false;

        auto current_node = root;
        for (char c:word) {
            if (!current_node->have_record(c))
                return false;

            current_node = current_node->follow_char(c);
        }
        return current_node->get_is_word();
    }

    bool remove(string word){
        if (root->is_empty())
            return false;

        if (!this->search(word))
            return false;

        auto current_node = root;
        for (char c:word) {
            if (!current_node->have_record(c))
                return false;

            current_node = current_node->follow_char(c);
        }
        return current_node->get_is_word();
    }
};

int main() {
    auto trie = new Trie;
    cout << boolalpha;
    cout << "cat was found: " << trie->search("cat") << endl;
    trie->insert("cat");
    cout << "cat was found: " << trie->search("cat") << endl;

    cout << "catie was found: " << trie->search("catie") << endl;
    trie->insert("catie");
    cout << "catie was found: " << trie->search("catie") << endl;

    trie->insert("time");
    trie->insert("times");

    cout << "time was found: " << trie->search("time") << endl;
    cout << "times was found: " << trie->search("times") << endl;

    trie->remove("tier");

    return 0;
}
