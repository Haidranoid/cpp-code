/*
#include <iostream>
#include <string>
#include <cctype>
#include <deque>
#include <vector>
#include <iomanip>

using namespace std;


template<typename T>
void display(const std::deque<T> &deque) {
    std::cout << "[ ";
    std::for_each(deque.begin(), deque.end(), [](T value) {
        std::cout << value << " ";
    });
    std::cout << "]" << std::endl;
}

bool is_palindrome(const string &s) {
    deque<char> deq;

    for (char c: s)
        if (isalpha(c))
            deq.push_back(toupper(c));

    while (deq.size() > 1) {
        char c1 = deq.front();
        char c2 = deq.back();

        if (c1 != c2)
            return false;

        deq.pop_front();
        deq.pop_back();
    }

    return true;
}

bool is_palindrome2(const string &s) {

    deque<char> deq;
    for (char c:s)
        if (isalpha(c))
            deq.push_back(toupper(c));


    auto it1 = deq.begin();
    auto it2 = deq.rbegin();

    while (it1 != deq.end()) {
        if (*it1 != *it2)
            return false;

        it1++, it2++;
    }

    return true;
}

 bool is_palindrome3(const string &s) {
    string string_clean;
    for (char c:s)
        if (isalpha(c))
            string_clean.push_back(toupper(c));

    string string_reversed;
    for (auto it = string_clean.rbegin(); it != string_clean.rend() ; it++)
        string_reversed.push_back(*it);

    if (string_clean != string_reversed)
        return false;

    return true;
}

int main() {
    std::vector<string> test_strings{"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
                                     "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
                                     "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!",
                                     "This is a palindrome", "palindrome"};

    cout << setw(10) << left << "Result" << "String" << endl;
    for (const auto &s :test_strings)
        cout << setw(10) << left << (is_palindrome(s) ? "true" : "false") << s << endl;
    cout << endl;


    return 0;
}
*/
