#include <iostream>
#include <string>

class Person {

public:
    std::string name;
    std::string address;
    int age;

    Person(std::string userName, int userAge, std::string userAddr) : name(userName), age(userAge), address(userAddr) {}


    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getAddress() const {
        return address;
    }
};

class Student : public Person {

public:
    std::string studentID;
    Student(std::string userN, int userA, std::string userAddr, std::string userId)
            : Person(userN, userA, userAddr), studentID(userId) {}

    std::string getStudentID() const {
        return studentID;
    }
};

int main() {

    Student student("김민현", 10, "daejeon", "202103904");

    std::cout << "Student Information" << std::endl;
    std::cout << "Name : " << student.getName() << std::endl;
    std::cout << "Age : " << student.getAge() << std::endl;
    std::cout << "Address : " << student.getAddress() << std::endl;
    std::cout << "Student ID : " << student.getStudentID() << std::endl;

}