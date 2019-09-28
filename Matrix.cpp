/*
Developer: Alka Mutnjakovic
Environment: C++
Description: This program transposes a matrix then adds the original and transposed to form a third matrix.
*/

#include <iostream>

using namespace std;

int main()
{
	int matrix1[16];
	int matrix2[16];
	int matrix3[16];

	cout << "Please enter 4 numbers for the first row of the matrix in order separated by spaces." << endl;
	cin >> matrix1[0] >> matrix1[1] >> matrix1[2] >> matrix1[3];

	cout << "Please enter the 4 numbers for the second row of the matrix in order separated by spaces." << endl;
	cin >> matrix1[4] >> matrix1[5] >> matrix1[6] >> matrix1[7];

	cout << "Please enter the 4 numbers for the third row of the matrix in order speparated by spaces." << endl;
	cin >> matrix1[8] >> matrix1[9] >> matrix1[10] >> matrix1[11];

	cout << "Please enter the 4 numbers for the third row of the matrix in order separated by spaces." << endl;
	cin >> matrix1[12] >> matrix1[13] >> matrix1[14] >> matrix1[15];

	matrix2[0] = matrix1[0];
	matrix2[1] = matrix1[4];
	matrix2[2] = matrix1[8];
	matrix2[3] = matrix1[12];
	matrix2[4] = matrix1[1];
	matrix2[5] = matrix1[5];
	matrix2[6] = matrix1[9];
	matrix2[7] = matrix1[13];
	matrix2[8] = matrix1[2];
	matrix2[9] = matrix1[6];
	matrix2[10] = matrix1[10];
	matrix2[11] = matrix1[14];
	matrix2[12] = matrix1[3];
	matrix2[13] = matrix1[7];
	matrix2[14] = matrix1[11];
	matrix2[15] = matrix1[15];

	for (int i = 0; i < 16; i++) {

		matrix3[i] = matrix1[i] + matrix2[i];

	}

	cout << "Matrix 1." << endl;
	cout << "=========" << endl;
	cout << matrix1[0] << ' ' << matrix1[1] << ' ' << matrix1[2] << ' ' << matrix1[3] << endl;
	cout << matrix1[4] << ' ' << matrix1[5] << ' ' << matrix1[6] << ' ' << matrix1[7] << endl;
	cout << matrix1[8] << ' ' << matrix1[9] << ' ' << matrix1[10] << ' ' << matrix1[11] << endl;
	cout << matrix1[12] << ' ' << matrix1[13] << ' ' << matrix1[14] << ' ' << matrix1[15] << endl;

	cout << "Matrix 2." << endl;
	cout << "=========" << endl;
	cout << matrix2[0] << ' ' << matrix2[1] << ' ' << matrix2[2] << ' ' << matrix2[3] << endl;
	cout << matrix2[4] << ' ' << matrix2[5] << ' ' << matrix2[6] << ' ' << matrix2[7] << endl;
	cout << matrix2[8] << ' ' << matrix2[9] << ' ' << matrix2[10] << ' ' << matrix2[11] << endl;
	cout << matrix2[12] << ' ' << matrix2[13] << ' ' << matrix2[14] << ' ' << matrix2[15] << endl;

	cout << "Matrix 3." << endl;
	cout << "=========" << endl;
	cout << matrix3[0] << ' ' << matrix3[1] << ' ' << matrix3[2] << ' ' << matrix3[3] << endl;
	cout << matrix3[4] << ' ' << matrix3[5] << ' ' << matrix3[6] << ' ' << matrix3[7] << endl;
	cout << matrix3[8] << ' ' << matrix3[9] << ' ' << matrix3[10] << ' ' << matrix3[11] << endl;
	cout << matrix3[12] << ' ' << matrix3[13] << ' ' << matrix3[14] << ' ' << matrix3[15] << endl;

	system("pause");
	return 0;
}



