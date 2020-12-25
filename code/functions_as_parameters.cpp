#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void test(int value) {
    cout << "Hello " << value << endl;
}

void function_pointers_1() {
    test(10);
    // void (*ptr_test)() = test;
    // creating a pointer to the function
    void (*ptr_test)(int) = nullptr;
    ptr_test = test;

    ptr_test(20);
}

bool match(string test) {
    return test.size() == 3;
}

//function that expects a function as parameter
int count_strings(const vector<string> &texts, bool (*match)(string test)) {
    int matched = 0;
    for (const auto &s:texts) {
        if (match(s))
            matched++;
    }
    return matched;
    //return count_if(texts.begin(), texts.end(), match);
}

void function_pointers_2() {
    vector<string> texts;
    texts.emplace_back("one");
    texts.emplace_back("two");
    texts.emplace_back("three");
    texts.emplace_back("two");
    texts.emplace_back("four");
    texts.emplace_back("two");
    texts.emplace_back("three");

    cout << boolalpha;
    cout << match("one") << endl;

    // using function pointer
    cout << count_if(texts.begin(), texts.end(), match) << endl;

    // using function pointer
    cout << count_strings(texts, match) << endl;
}

// functors - 98++
struct TestFunctor {
    virtual bool operator()(string text) = 0;

    virtual ~TestFunctor() = default;
};

// functors - 98++
struct Check : public TestFunctor {
    bool operator()(string text) override {
        return text == "lion";
    }

    ~Check() override = default;
};

void check(string text, TestFunctor &test) {
    if (test(text))
        cout << "Text matches" << endl;
    else
        cout << "No match" << endl;
}

void functors() {
    Check pred;
    Check m;

    string value = "lion";

    cout << boolalpha;
    cout << pred(value) << endl;
    check("liond", m);

}

int functions_as_parameters() {
//    function_pointers_1();
//    function_pointers_2();
    functors();
    return 0;
}
