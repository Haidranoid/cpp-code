/*
#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>
#include <algorithm>
#include <iomanip>
#include <map>
#include <set>

using namespace std;

void display(const std::map<string, set<int>> &map) {
    std::cout << "[ ";
    std::for_each(map.begin(), map.end(), [](const pair<string, set<int>> &pair) {
        std::cout << pair.first << ":" << "[ ";

        std::for_each(pair.second.begin(), pair.second.end(), [](const int &value) {
            std::cout << value << " ";
        });

        std::cout << "] ";
    });
    std::cout << "]" << std::endl;
}

template<typename T1, typename T2>
void display(const std::map<T1, T2> &map) {
    std::cout << "[ ";
    std::for_each(map.begin(), map.end(), [](const pair<T1, T2> &value) {
        std::cout << value.first << ": " << value.second << " ";
    });
    std::cout << "]" << std::endl;
}

template<typename T1, typename T2>
void display(const std::set<pair<T1, T2>> &set) {
    std::cout << "[ ";
    std::for_each(set.begin(), set.end(), [](const pair<T1, T2> &value) {
        std::cout << value.first << ": " << value.second << " ";
    });
    std::cout << "]" << std::endl;
}

template<typename T>
void display(const set<T> &set){
    cout << "[ ";
    for_each(set.begin(),set.end(),[](const T &value){
       cout << value << " ";
    });
    cout << "]";
}

*/
/*for_each(words_map.begin(), words_map.end(), [&words_set](auto const pair) {
    words_set.insert(make_pair(pair.first, pair.second));
});*//*


int main() {
    ifstream in_file;
    in_file.open("../words.txt");

    if (!in_file) {
        cout << "File open failed" << endl;
        return 1;
    }


    int current_line = 1;
    string line;
    string word;
    string word_clean;

    map<string, int> words_map;
    map<string, set<int>> words_occurrences;

    while (!in_file.eof()) {
        getline(in_file, line);
        istringstream iss{line};

        while (iss >> word) {
            for (char c: word)
                if (isalpha(c))
                    word_clean.push_back(c);


            words_map[word_clean] += 1;
            words_occurrences[word_clean].insert(current_line);

            word_clean = "";
        }
        current_line++;
    }

    in_file.close();

    // part 1 ------------------------------------------------------

    cout << setw(10) << left << "Word"
         << setw(10) << right << "Count" << endl;

    cout << setw(20) << setfill('=') << "" << endl;

    cout << setfill(' ');
    for_each(words_map.begin(), words_map.end(), [](const auto &pair) {
        cout << setw(10) << left << pair.first
             << setw(10) << right << pair.second << endl;
    });
    // -------------------------------------------------------------
    cout << endl;
    // part 2 ------------------------------------------------------
    cout << setw(10) << left << "Word"
         << setw(25) << right << "Ocurrences" << endl;

    cout << setw(35) << setfill('=') << "" << endl;

    cout << setfill(' ');
    for_each(words_occurrences.begin(), words_occurrences.end(), [](const auto &pair) {
        cout << setw(10) << left << pair.first;
        cout << setw(15) << right;
        display(pair.second);
        cout << endl;
    });
    // -------------------------------------------------------------
    return 0;
}*/
