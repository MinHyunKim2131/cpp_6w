#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor( )" << endl;
    }

    ~A() {
        cout << "Destructor( )" << endl;
    }
};

int main() {
    try {
        A object;
        throw 10;
    } catch (int value) {
        cout << "Catch " << value << endl;
    }
}