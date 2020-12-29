#include <iostream>
#include <string>
#include "../classes/ring.h"

using namespace std;

int ring_class() {
    ring<string> strings(3);

    strings.add("one");
    strings.add("two");
    strings.add("three");
    strings.add("four");

    for (int i = 0; i < strings.size(); i++) {
        cout << strings.get(i) << endl;
    }

    for(ring<string>::iterator it = strings.begin(); it != strings.end(); it++){
        cout << *it << endl;
    }

    for(string value: strings){
        cout << value << endl;
    }

    return 0;
}
