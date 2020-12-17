/*
#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include <vector>
#include <iomanip>

using namespace std;

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

template<typename T>
void display(stack<T> stack) {
    std::cout << "[ ";
    while (!stack.empty()) {
        T element = stack.top();
        stack.pop();
        std::cout << element << " ";
    }
    std::cout << "]" << std::endl;
}

bool is_palindrome(const string &s){
    stack<char> s1;
    queue<char> q1;

    for (char c:s)
        if (isalpha(c)){
            s1.push(toupper(c));
            q1.push(toupper(c));
        }

    while (s1.size() > 1){
        if (s1.top() != q1.front())
            return false;
        s1.pop();
        q1.pop();
    }

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
}*/
