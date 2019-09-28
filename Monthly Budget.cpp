// Name: Alka Mutnjakovic 
// Student ID: 400091257
// Programming Challenge #11: Monthly Budget


#include <iostream>

using namespace std;

void enter_amounts();
void display_amounts();


struct MonthlyBudget {

	double housing;
	double utilities;
	double household;
	double transport;
	double food;
	double medical;
	double insurance;
	double entertainment;
	double clothing;
	double misc;

};

MonthlyBudget month;

int main()
{
	enter_amounts();

	display_amounts();

	system("pause");
	return 0;
}

void enter_amounts() {

	cout << "INPUT MONEY SPENT THIS MONTH" << endl;
	cout << " " << endl;

	cout << "Please enter the amount spent for Housing this month: ";
	cin >> month.housing;

	cout << "Please enter the amount spent for Utilities this month: ";
	cin >> month.utilities;

	cout << "Please enter the amount spent for Household Expenses this month: ";
	cin >> month.household;

	cout << "Please enter the amount spent for Transportation this month: ";
	cin >> month.transport;

	cout << "Please enter the amount spent for Food this month: ";
	cin >> month.food;

	cout << "Please enter the amount spent for Medical this month: ";
	cin >> month.medical;

	cout << "Please enter the amount spent for Insurance this month: ";
	cin >> month.insurance;

	cout << "Please enter the amount spent for Entertainment this month: ";
	cin >> month.entertainment;

	cout << "Please enter the amount spent for Clothing this month: ";
	cin >> month.clothing;

	cout << "Please enter the amount spent for Miscellaneous this month: ";
	cin >> month.misc;

	cout << " " << endl;

}

void display_amounts() {

	cout << "SUMMARY OF MONTH" << endl;
	cout << " " << endl;

	if (month.housing > 500) {

		cout << "You went over the 500 dollar budget for housing this month by spending $" << month.housing << "." << endl;
	}

	if (month.housing <= 500) {

		cout << "You went under the 500 dollar budget for housing by spending $" << month.housing << "." << endl;
	}

	if (month.utilities > 150) {

		cout << "You went over the 150 dollar budget for utilities this month by spending $" << month.utilities << "." << endl;
	}

	if (month.utilities <= 150) {

		cout << "You went under the 150 dollar budget for utilities by spending $" << month.utilities << "." << endl;
	}

	if (month.household > 65) {

		cout << "You went over the 65 dollar budget for household expenses this month by spending $" << month.household << "." << endl;
	}

	if (month.household <= 150) {

		cout << "You went under the 65 dollar budget for household expenses by spending $" << month.household << "." << endl;
	}

	if (month.transport > 50) {

		cout << "You went over the 50 dollar budget for transportation this month by spending $" << month.transport << "." << endl;
	}

	if (month.transport <= 50) {

		cout << "You went under the 50 dollar budget for transportation by spending $" << month.transport << "." << endl;
	}

	if (month.food > 250) {

		cout << "You went over the 250 dollar budget for food this month by spending $" << month.food << "." << endl;
	}

	if (month.food <= 250) {

		cout << "You went under the 250 dollar budget for food by spending $" << month.food << "." << endl;
	}

	if (month.medical > 30) {

		cout << "You went over the 30 dollar budget for medical this month by spending $" << month.medical << "." << endl;
	}

	if (month.medical <= 30) {

		cout << "You went under the 30 dollar budget for medical by spending $" << month.medical << "." << endl;
	}

	if (month.insurance > 100) {

		cout << "You went over the 100 dollar budget for insurance this month by spending $" << month.insurance << "." << endl;
	}

	if (month.insurance <= 100) {

		cout << "You went under the 100 dollar budget for insurance by spending $" << month.insurance << "." << endl;
	}

	if (month.entertainment > 150) {

		cout << "You went over the 150 dollar budget for entertainment this month by spending $" << month.entertainment << "." << endl;
	}

	if (month.entertainment <= 150) {

		cout << "You went under the 150 dollar budget for entertainment by spending $" << month.entertainment << "." << endl;
	}

	if (month.clothing > 75) {

		cout << "You went over the 75 dollar budget for clothing this month by spending $" << month.clothing << "." << endl;
	}

	if (month.clothing <= 75) {

		cout << "You went under the 75 dollar budget for clothing by spending $" << month.clothing << "." << endl;
	}

	if (month.misc > 50) {

		cout << "You went over the 50 dollar budget for miscellaneous this month by spending $" << month.misc << "." << endl;
	}

	if (month.misc <= 75) {

		cout << "You went under the 50 dollar budget for miscellaneous by spending $" << month.misc << "." << endl;
	}

}
