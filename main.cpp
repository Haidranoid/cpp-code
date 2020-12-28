#include <iostream>

using namespace std;

class Parent {
public:
    void speak() {
        cout << "parent speaking" << endl;
    }
};

class Son : public Parent {

};

class Daughter : public Parent {

};

void static_casts() {

    Parent parent;
    Son son;
    Daughter daughter;

    Parent *ptr_parent = &son;
//    Son *ptr_son = static_cast<Son*>(&parent);

    Son *ptr_son = static_cast<Son *>(ptr_parent);
    cout << ptr_son << endl;

    Parent &&p = Parent();
    Parent &&p2 = static_cast<Parent &&>(parent);
    p2.speak();

/*  float value = 3.23;
    cout << (int) value << endl;
    cout << int(value) << endl;
    cout << static_cast<int>(value) << endl;*/

}

int main() {
//    static_casts();

    return 0;
}
