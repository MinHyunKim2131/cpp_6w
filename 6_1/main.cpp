#include <iostream>

class userClass {

public:
    int userValue;
    userClass() : userValue(5) {}

    // postfix unary
    userClass operator++(int) {
        userClass temp = *this;
        userValue++;
        return temp;
    }

    // prefix unary
    userClass& operator++() {
        userValue++;
        return *this;
    }

    int getValue() const {
        return userValue;
    }
};

int main() {
    userClass a;
    std::cout << "초기값: " << a.getValue() << std::endl;

    a++;
    std::cout << "결과: " << a.getValue() << std::endl;

    ++a;
    std::cout << "결과: " << a.getValue() << std::endl;
}