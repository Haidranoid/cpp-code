#ifndef TRIE_H
#define TRIE_H

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

    bool remove(string word) {
        if (root->is_empty())
            return false;

        if (!this->search(word)){
            cout << "The word: " << word << " was not found." << endl;
            return false;
        }

        auto current_node = root;
        auto delete_node = current_node;
        string delete_chars = word;

        for (int i = 0; i < word.length(); i++) {
            if (current_node->get_is_word()) {
                delete_node = current_node;
                delete_chars = word.substr(i, word.length() - i + 1);
            }

            current_node = current_node->follow_char(word.at(i));
        }

        if (!current_node->is_empty()) {
            cout << "'" <<word <<"' could not be deleted because there is other word in the chain" << endl;
            return false;
        }

        for (int i = 0; i < delete_chars.length(); i++) {
            auto next_node = delete_node->follow_char(delete_chars.at(i));
            delete_node->delete_record(delete_chars.at(i));

            if (i != 0)
                delete delete_node;

            delete_node = next_node;
        }
        delete delete_node;

        return true;
    }
};

#endif //TRIE_H
