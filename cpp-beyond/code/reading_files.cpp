#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int reading_files() {
    ifstream in_file; // open file
    in_file.open("../test.txt", ios_base::in); // open file

    string line{};
    char c;

    if (!in_file) {
        cerr << "File open error" << endl;
        return 1;
    }

/*    in_file >> line;
    cout << line << endl;*/

    while (!in_file.eof()) {
        getline(in_file, line);
        cout << line << endl;
    }

/*
    while (getline(in_file, line))
        cout << line << endl;
*/

/*    while (in_file.get(c))
        cout << c;*/

    in_file.close();
    return 0;
}

