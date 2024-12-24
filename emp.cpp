#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    double salary;

public:
    Employee(string empName, int empId, double empSalary)
        : name(empName), id(empId), salary(empSalary) {}

    virtual void calculateEarnings() = 0;
    virtual void displayDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Base Salary: $" << salary << endl;
    }
};

class Manager : public Employee {
private:
    double bonus;

public:
    Manager(string empName, int empId, double empSalary, double performanceRating)
        : Employee(empName, empId, empSalary) {
        bonus = (performanceRating >= 4.5) ? 0.2 * salary : (performanceRating >= 3.0) ? 0.1 * salary : 0;
    }

    void calculateEarnings() override {
        salary += bonus;
    }

    void displayDetails() override {
        Employee::displayDetails();
        cout << "Bonus: $" << bonus << endl;
        cout << "Total Earnings: $" << salary << endl;
    }
};

class Developer : public Employee {
private:
    double overtimeCompensation;
    int extraHours;

public:
    Developer(string empName, int empId, double empSalary, int extraHrs)
        : Employee(empName, empId, empSalary), extraHours(extraHrs) {
        overtimeCompensation = extraHours * 20;
    }

    void calculateEarnings() override {
        salary += overtimeCompensation;
    }

    void displayDetails() override {
        Employee::displayDetails();
        cout << "Overtime Hours: " << extraHours << endl;
        cout << "Overtime Compensation: $" << overtimeCompensation << endl;
        cout << "Total Earnings: $" << salary << endl;
    }
};

int main() {
    string name;
    int id;
    double salary, performanceRating;
    int extraHours;

    cout << "Enter details for Manager:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "ID: ";
    cin >> id;
    cout << "Salary: ";
    cin >> salary;
    cout << "Performance Rating (1.0 to 5.0): ";
    cin >> performanceRating;
    Manager manager(name, id, salary, performanceRating);
    manager.calculateEarnings();

    cout << "\nEnter details for Developer:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "ID: ";
    cin >> id;
    cout << "Salary: ";
    cin >> salary;
    cout << "Extra Hours Worked: ";
    cin >> extraHours;
    Developer developer(name, id, salary, extraHours);
    developer.calculateEarnings();

    cout << "\nManager Details:" << endl;
    manager.displayDetails();

    cout << "\nDeveloper Details:" << endl;
    developer.displayDetails();

    return 0;
}
