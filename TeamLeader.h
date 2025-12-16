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
		: ProductionWorker(n, num, date, s, rate), monthlyBonus(bonus), requiredTrainingHours(required), attendedTrainingHours(attended) {}

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
