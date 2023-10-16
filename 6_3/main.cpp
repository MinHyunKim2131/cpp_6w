#include <iostream>
using namespace std;

class A {
public:

    // 생성자
    A() {
        cout << "Constructor( )" << endl;
    }

    //소멸자
    ~A() {
        cout << "Destructor( )" << endl;
    }
};

int main() {
    try {
        A object;
        // 오브젝트를 생성하고 throw
        throw 10;
    } catch (int value) {
        cout << "Catch " << value << endl;
    }
}