/*
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main() {
    std::ifstream file{};
    file.open("../romeoandjuliet.txt");

    if (!file) {
        std::cerr << "Cannot open the file provided." << std::endl;
        return 1;
    }

    std::string word_to_find{};

    std::cout << "Enter the substring to search for: ";
    std::cin >> word_to_find;

    int words_total = 0;
    int words_found = 0;

    while (!file.eof()) {
        std::string word{};
        file >> word;

        if (word.find(word_to_find) != std::string::npos) {
            words_found++;
        }
        words_total++;
    }
    std::cout << words_total << " words were searched..." << std::endl;
    std::cout << "The substring " << word_to_find << " was found " << words_found << " times" << std::endl;

    return 0;
}

*/
