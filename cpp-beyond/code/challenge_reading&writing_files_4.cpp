/*
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream in_file; // open file
    std::ofstream out_file; // create file

    in_file.open("../romeoandjuliet.txt"); // open file
    out_file.open("../romeoandjuliet_copy.txt"); // create file

    if (!in_file) {
        std::cerr << "File opening error" << std::endl;
        return 1;
    }

    if (!out_file) {
        std::cerr << "File creating error" << std::endl;
        return 1;
    }

    std::string line{};
    int line_counter = 1;

    while (!in_file.eof()) {
        getline(in_file, line);
        if (std::all_of(line.begin(), line.end(), isspace)) {
            out_file << std::endl;
        } else {
            out_file << line_counter << " " << line << std::endl;
            line_counter++;
        }
    }

    in_file.close();
    out_file.close();


    return 0;
}

*/
