/*
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

int main() {

    // Writing binary file
    ofstream out_file;
    out_file.open("../outputfile.bin", ios::app);

    if (out_file) {
        Person p{"eduardo", 24, 80.4};
        out_file.write((char *) &p, sizeof p);
        out_file.write((char *) &p, sizeof p);
        out_file.write((char *) &p, sizeof p);

        out_file.close();
    } else {
        cout << "an error has occurred writing" << endl;
    }

    // Read binary file

    ifstream in_file;
    in_file.open("../outputfile.bin", ios::binary);

    Person p2{};
    if (in_file) {
        in_file.read((char *) &p2, sizeof p2);

        in_file.close();
    } else {
        cout << "an error has occurred reading" << endl;
    }

    cout << p2.name << ", " << p2.age << ", " << p2.weight << endl;


    return 0;
}
*/
