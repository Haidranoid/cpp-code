#include <iostream>

using namespace std;

class Parent {
public:
    virtual void speak() {
        cout << "parent speaking" << endl;
    }
};

class Brother : public Parent {

};

class Sister : public Parent {

};

void static_casts() {

    Parent parent;
    Brother brother;
    Sister daughter;

    Parent *ptr_parent = &brother;
//    Brother *ptr_brother = static_cast<Brother*>(&parent);

    Brother *ptr_brother = static_cast<Brother *>(ptr_parent);
    cout << ptr_brother << endl;

    Parent &&p = Parent();
    Parent &&p2 = static_cast<Parent &&>(parent);
    p2.speak();

/*  float value = 3.23;
    cout << (int) value << endl;
    cout << int(value) << endl;
    cout << static_cast<int>(value) << endl;*/

}

void dynamic_casts() {
    Parent parent;
    Brother brother;

    Parent *ptr_parent = &parent;
//    Parent *ptr_parent = &brother;

    Brother *ptr_brother = dynamic_cast<Brother *>(ptr_parent);

    if (ptr_brother == nullptr)
        cout << "invalid cast" << endl;
    else
        cout << ptr_brother << endl;
}

void reinterpret_casts(){
    Parent parent;
    Brother brother;
    Sister sister;

    Parent *ptr_parent = &brother;

    Sister *ptr_sister = reinterpret_cast<Sister *>(ptr_parent);

    if (ptr_sister == nullptr)
        cout << "invalid cast" << endl;
    else
        cout << ptr_sister << endl;
}

int casts() {
//    static_casts();
//    dynamic_casts();
    reinterpret_casts();
    return 0;
}
