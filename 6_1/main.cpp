#include <iostream>

class userClass {

public:
    int userValue;
    userClass() : userValue(5) {}

    userClass operator++(int) {
        userClass temp = *this;
        userValue++;
        return temp;
    }


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
    std::cout << "초기값: " << a.getValue() << std::endl;  // 5

    a++;
    std::cout << "결과: " << a.getValue() << std::endl;  // 6

    ++a;
    std::cout << "결과: " << a.getValue() << std::endl;  // 7
}