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
		: Employee(n, num, date), shift(s), hourlyPayRate(rate) {}

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
