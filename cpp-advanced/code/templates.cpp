#include <iostream>

using namespace std;

template<class T, class K>
class Test {
    friend ostream &operator<<(ostream &os, const Test<T, K> &test) {
        os << test.t << " : " << test.k;
        return os;
    }

private:
    T t;
    K k;
public:
    Test(T t, K k) {
        this->t = t;
        this->k = k;
    }
};

template<typename T>
void print(T n){
    cout << n << endl;
}

int templates() {
    Test<int, string> test{20, "Eduardo"};
    cout << test << endl;

    print("Hello");
    print(6);
    return 0;
}
