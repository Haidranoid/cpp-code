#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *first_name = new char[20];
    char *last_name = new char[20];
    char *full_name = new char[50];
    char *temp = new char[50];

/*    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << "-------------------------------" << endl;

    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    cout << "Your full name is " << full_name << endl;*/

    cout << "-------------------------------" << endl;
    cout << "Enter your full name: ";
    cin.getline(full_name,50,'\n');

    for (int i = 0; i < strlen(full_name); i++)
        if (isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);

    cout << "Your full name in upper case is: " << full_name << endl;

    return 0;
}
