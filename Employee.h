#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    string employeeNumber;
    string hireDate;

public:
    Employee() : name(""), employeeNumber(""), hireDate("") {}
    Employee(string n, string num, string date) : name(n), employeeNumber(num), hireDate(date) {}

    string getName() const { return name; }
    string getEmployeeNumber() const { return employeeNumber; }
    string getHireDate() const { return hireDate; }

    void setName(string n) { name = n; }
    void setEmployeeNumber(string num) { employeeNumber = num; }
    void setHireDate(string date) { hireDate = date; }

    void printEmployee() const {
        cout << "Name: " << name << endl;
        cout << "Employee Number: " << employeeNumber << endl;
        cout << "Hire Date: " << hireDate << endl;
    }
};

#endif
