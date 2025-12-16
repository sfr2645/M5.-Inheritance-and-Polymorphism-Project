// M5. Inheritance and Polymorphism Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee {
private:
    int shift;
    double hourlyPayRate;

public:
    ProductionWorker() : Employee(), shift(1), hourlyPayRate(0.0) {}
    ProductionWorker(string n, string num, string date, int s, double rate)
        : Employee(n, num, date), shift(s), hourlyPayRate(rate) {
    }

    int getShift() const { return shift; }
    double getHourlyPayRate() const { return hourlyPayRate; }

    void setShift(int s) { shift = s; }
    void setHourlyPayRate(double rate) { hourlyPayRate = rate; }

    void printProductionWorker() const {
        printEmployee();
        cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
        cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
    }
};

#endif

#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
    double annualSalary;
    double annualBonus;

public:
    ShiftSupervisor() : Employee(), annualSalary(0.0), annualBonus(0.0) {}
    ShiftSupervisor(string n, string num, string date, double salary, double bonus)
        : Employee(n, num, date), annualSalary(salary), annualBonus(bonus) {
    }

    double getAnnualSalary() const { return annualSalary; }
    double getAnnualBonus() const { return annualBonus; }

    void setAnnualSalary(double salary) { annualSalary = salary; }
    void setAnnualBonus(double bonus) { annualBonus = bonus; }

    void printShiftSupervisor() const {
        printEmployee();
        cout << "Annual Salary: $" << annualSalary << endl;
        cout << "Annual Bonus: $" << annualBonus << endl;
    }
};

#endif

#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:
    TeamLeader() : ProductionWorker(), monthlyBonus(0.0), requiredTrainingHours(0), attendedTrainingHours(0) {}
    TeamLeader(string n, string num, string date, int s, double rate, double bonus, int required, int attended)
        : ProductionWorker(n, num, date, s, rate), monthlyBonus(bonus), requiredTrainingHours(required), attendedTrainingHours(attended) {
    }

    double getMonthlyBonus() const { return monthlyBonus; }
    int getRequiredTrainingHours() const { return requiredTrainingHours; }
    int getAttendedTrainingHours() const { return attendedTrainingHours; }

    void setMonthlyBonus(double bonus) { monthlyBonus = bonus; }
    void setRequiredTrainingHours(int hours) { requiredTrainingHours = hours; }
    void setAttendedTrainingHours(int hours) { attendedTrainingHours = hours; }

    void printTeamLeader() const {
        printProductionWorker();
        cout << "Monthly Bonus: $" << monthlyBonus << endl;
        cout << "Required Training Hours: " << requiredTrainingHours << endl;
        cout << "Attended Training Hours: " << attendedTrainingHours << endl;
    }
};

#endif

#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

int main() {
    ProductionWorker pw1("Alice Smith", "PW123", "2023-01-01", 1, 18.50);
    ProductionWorker pw2("Bob Johnson", "PW124", "2022-06-15", 2, 20.75);
    cout << "Production Worker 1:\n";
    pw1.printProductionWorker();
    cout << "\nProduction Worker 2:\n";
    pw2.printProductionWorker();

    ShiftSupervisor ss("Charlie Brown", "SS300", "2021-03-20", 55000.0, 5000.0);
    cout << "\nShift Supervisor:\n";
    ss.printShiftSupervisor();

    TeamLeader tl("Dana Lee", "TL400", "2020-09-10", 1, 22.50, 1500.0, 40, 32);
    cout << "\nTeam Leader:\n";
    tl.printTeamLeader();

    return 0;
}