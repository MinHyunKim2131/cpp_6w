#include <iostream>
#include <exception>

class NewException : public std::exception {
public:
    const char* what() const throw() {
        return "NewException";
    }
};

int main() {
    try {
        throw NewException();
    } catch (NewException& e) {
        std::cout << "My exception is " << e.what() << std::endl;
    }
}