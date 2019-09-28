/*
Developer: Alka Mutnjakovic
Environment: C++
Description: This is a program that saves information about parts into a file. 
*/


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	typedef struct {

		char part_name[15];     // Type of part.
		int quantity;           // Number of parts left.
		float cost_each;        // Cost of each part.
		char manufacturer[20];  // Name of Manufacturer.

	} part;

	ofstream outfile;       // File object.

	part part_number[3];

	// Open a file for writing.
	outfile.open("PARTS.DTA");

	// Get data from program user.
	cout << "Enter part type, quantity, cost each, and manufacturer separated by spaces:\n";
	cout << "Press -RETURN- to terminate input.\n";

	for (int i = 0; i < 3; i++) {

		cin >> part_number[i].part_name >> part_number[i].quantity >> part_number[i].cost_each >> part_number[i].manufacturer;

		outfile << part_number[i].part_name;
		outfile << " ";
		outfile << part_number[i].quantity;
		outfile << " ";
		outfile << part_number[i].cost_each;
		outfile << " ";
		outfile << part_number[i].manufacturer;
		outfile << endl;

	}

	// Close the opened file.
	outfile.close();

	cin.get();
	cin.get();
	return 0;
}
