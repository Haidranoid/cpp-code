#include <iostream>
#include <exception>

class MyException : public std::exception {
public:
    const char *what() const noexcept override {
        return "Something bad happened!";
    }
};

class TestException {
public:
    // the word noexcept avoid to throw exceptions
    //void goesWrong() noexcept
    void goesWrong(){
        throw MyException();
    }
};

int exceptions() {
    try {
        TestException test;
        test.goesWrong();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "still running" << std::endl;
    return 0;
}