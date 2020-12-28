#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

int add(int a, int b, int c) {
    cout << a << ", " << b << ", " << c << endl;
    return a + b + c;
}

void run(function<int(int, int)> function) {
    function(7, 3);
}

int binds() {
//    auto calculate = bind(add, _1, _2, _3);
//    auto calculate = bind(add, _2, _3, _1);
    auto calculate = bind(add, _2, 100, _1);
    cout << calculate(10, 30) << endl;

    run(calculate);
    return 0;
}
