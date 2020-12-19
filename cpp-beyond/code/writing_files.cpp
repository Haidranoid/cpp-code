/*
#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Create and open a text file
    std::ofstream out_file;
    out_file.open("../new_file.txt", std::ios::app);

    if (!out_file) {
        std::cerr << "Cannot create the file provided." << std::endl;
        return 1;
    }

    // reads from the console the content

    std::string line{};
    std::cout << "Enter something to write to the file: ";
    std::getline(std::cin, line, '.');

    // Write to the file
    out_file << line << std::endl;


    // Close the file
    out_file.close();

    return 0;
}

*/
