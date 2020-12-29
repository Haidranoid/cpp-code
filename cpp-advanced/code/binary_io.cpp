#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#pragma pack(push, 1)
struct Person {
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)

void writeBinaryFile(const char *file_name) {
    ofstream out_file;
    out_file.open(file_name, ios::binary);

    if (!out_file)
        throw "Error creating the binary file";

    Person p{"Eduardo", 24, 85.5};
    Person p1{"Arturo", 74, 45.5};
    Person p2{"Ramiro", 54, 60.0};
    out_file.write(reinterpret_cast<char *>(&p), sizeof(p));
    out_file.write(reinterpret_cast<char *>(&p1), sizeof(p1));
    out_file.write(reinterpret_cast<char *>(&p2), sizeof(p2));
    out_file.close();
}

void readBinaryFile(const char *file_name) {
    ifstream in_file;
    in_file.open(file_name, ios::binary);

    if (!in_file)
        throw "Error reading the binary file";

    Person p{};
//    while (in_file.read((char *) &p, sizeof p)) {
    while (in_file.read(reinterpret_cast<char *>(&p), sizeof p)) {
        cout << p.name << " " << p.age << " " << p.weight << endl;
    }

    in_file.close();
}

int binaryWriteAndReading() {
    writeBinaryFile("../test.bin");
    readBinaryFile("../test.bin");
    return 0;
}