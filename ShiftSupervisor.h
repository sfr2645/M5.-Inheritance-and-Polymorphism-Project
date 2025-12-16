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
		: Employee(n, num, date), annualSalary(salary), annualBonus(bonus) {}

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
