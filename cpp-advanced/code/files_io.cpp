#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeFile(const char *file_name) {
    fstream out_file;
    out_file.open(file_name, ios::out);

    if (!out_file)
        throw "Error creating the file";

    out_file << "Population UK: 6400000" << endl;
    out_file << "Population France: 6640000" << endl;
    out_file << endl;
    out_file.close();
}

void readFile(const char *file_name) {
    fstream in_file;
    in_file.open(file_name, ios::in);

    if (!in_file)
        throw "Error reading the file";

    char c;
    string line;
    int population;
//    while (in_file.get(c))
//    while (getline(in_file, line))
    while (getline(in_file, line,':')){
        in_file >> population;
        if (in_file)
            cout << line << " -- " << population;
    }

    in_file.close();
}

int file_io() {
    try {
        writeFile("../test.txt");
        readFile("../test.txt");
    } catch (const char *ex) {
        cerr << ex << endl;
    }

    return 0;
}