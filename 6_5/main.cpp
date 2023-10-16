#include <iostream>
#include <string>

using namespace std;

// Employee 클래스
class Employee {

public:
    string emp_id;
    string name;
    int age;
    string address;
    float salary;

    Employee(string id, string n, int a, string addr, float sal)
            : emp_id(id), name(n), age(a), address(addr), salary(sal) {}

    string get_emp_id() {
        return emp_id;
    }

    string get_name() {
        return name;
    }

    int get_age() {
        return age;
    }

    string get_address() {
        return address;
    }

    float get_salary() {
        return salary;
    }
};

// Manger 클래스는 Employee 를 상속받는다.
class Manager : public Employee {

public:
    int team_size;
    Manager(string id, string n, int a, string addr, float sal, int size)
            : Employee(id, n, a, addr, sal), team_size(size) {}

    int get_team_size() {
        return team_size;
    }

    void print() {
        cout << "Manager Information" << endl;
        cout << "Employee ID : " << get_emp_id() << endl;
        cout << "Name : " << get_name() << endl;
        cout << "Age : " << get_age() << endl;
        cout << "Address : " << get_address() << endl;
        cout << "Salary : $" << get_salary() << endl;
        cout << "Team Size : " << get_team_size() << endl;
    }
};

int main() {

    // 객체 생성
    Manager manager("EMP001", "Manager 이름", 35, "seoul", 5000.00, 10);
    manager.print();
    return 0;
}