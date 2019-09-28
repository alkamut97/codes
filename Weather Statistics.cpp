// Name: Alka Mutnjakovic
// Student ID: 400091257 
// Programming Challenge #4: Weather Statistics


#include <iostream>

using namespace std;

struct WeatherInfo
{
	bool low;
	bool high;
	double rain;
	double hightemp;
	double lowtemp;
	double avgtemp;
};

int main()
{
	WeatherInfo month[11];

	for (int i = 0; i < 12; i++) {

		cout << "Please enter the total rainfall in cm for month " << i + 1 << " : ";
		cin >> month[i].rain;

		cout << "Please enter the high temperature in degrees fahrenheit for month " << i + 1 << " : ";
		cin >> month[i].hightemp;

		while (month[i].hightemp > 140 || month[i].hightemp < -100) {

			cout << "This temperature is incorrect, please enter a tempertature between -100 and 140 degrees fahrenheit.";

			cout << "Please enter the high temperature in degrees fahrenheit for month " << i + 1 << " : ";
			cin >> month[i].hightemp;

		}

		cout << "Please enter the low temperature in degrees fahrenheit for month " << i + 1 << " : ";
		cin >> month[i].lowtemp;
		cout << endl;

		while (month[i].lowtemp > 140 || month[i].lowtemp < -100) {

			cout << "This temperature is incorrect, please enter a temperature between -100 and 140 degrees fahrenheit.";

			cout << "Please enter the low temperature in degrees fahrenheit for month " << i + 1 << " : ";
			cin >> month[i].lowtemp;
			cout << endl;

		}

		month[i].avgtemp = (month[i].hightemp + month[i].lowtemp) / 2;

		cout << "The average temperature for month " << i + 1 << " is " << month[i].avgtemp << " degrees celsius.";
		cout << endl;

	}

	double totalrain;

	totalrain = (month[0].rain + month[1].rain + month[2].rain + month[3].rain + month[4].rain + month[5].rain + month[6].rain + month[7].rain + month[8].rain + month[9].rain + month[10].rain + month[11].rain);

	cout << "The total rainfall for the year is " << totalrain << " cm. " << endl;

	//Calculate the highest temperature of the year (and month)

	double highest = -140;
	double lowest = 100;

	for (int i = 0; i < 12; i++) {

		if (highest > month[i].hightemp) {

			highest = month[i].hightemp;

		}

		if (lowest < month[i].lowtemp) {

			lowest = month[i].lowtemp;
		}

	}

	for (int i = 0; i < 12; i++) {

		if (highest == month[i].hightemp) {

			month[i].high = true;
		}

		if (lowest == month[i].lowtemp) {

			month[i].low = true;
		}


	}

	cout << " The Highest temperature was " << highest << " degrees fahrenheit in month ";
	for (int i = 0; i < 12; i++) {

		if (month[i].high == true) {

			cout << i + 1 << " ." << endl;

		}
	}

	cout << " The lowest temperature was " << lowest << " degrees fahrenheit in month ";
	for (int i = 0; i < 12; i++) {

		if (month[i].low == true) {

			cout << i + 1 << " ." << endl;

		}
	}

	double avgmonthly;

	avgmonthly = (month[0].avgtemp + month[1].avgtemp + month[2].avgtemp + month[3].avgtemp + month[4].avgtemp + month[5].avgtemp + month[6].avgtemp + month[7].avgtemp + month[8].avgtemp + month[9].avgtemp + month[10].avgtemp + month[11].avgtemp);

	cout << "The average rainfall of the monthly average rainfalls is " << avgmonthly << " cm. " << endl;


	system("Pause");
	return 0;
}
