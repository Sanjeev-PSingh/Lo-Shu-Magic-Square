/*
	Sanjeev Singh

	loshu.cpp

	Asks user to input a list of number from 1 to 9 in a random order
	the dispays the numbers in a 3x3 grid and determines if the square
	is a Lo Shu Magic Square.

*/


#include <iostream>
using namespace std;

// Function prototypes
void Getnumbers(int& E1[][], int& E2[][], int& E3[][], int& E4[][], int& E5[][], int& E6[][], int& E7[][], int& E8[][], int& E9[][]);

int num = 0;
int main()
{
	// Variables
	int Col;
	int Row;

	cout << "Creating Lo Shu Square ..." << endl;
	cout << "\n";
	cout << "Enter Nine Numbers (1-9)" << endl;

	
	/*

	int loShu[3][3];

	int c = 1;

	for (Col = 0; Col < 3; Col++)
	{
		for (Row = 0; Row < 3; Row++)
		{

			cout << "Number " << c << ": ";
			cin >> num;
			
			while (num < 1 || num > 9 || num == loShu[0][0] == loShu[0][1] == loShu[0][2] == loShu[1][1] == loShu[1][2] == loShu[1][0] == loShu[2][0] == loShu[2][1] == loShu[2][2])
			{
				cout << "Error ... " << num << " is already in the Lo Shu Square. Try again";
				cout << "Number " << c << ": ";
				cin >> num;
			}
			while (num == loShu[0][0] == loShu[0][1] == loShu[0][2] == loShu[1][1] == loShu[1][2] == loShu[1][0] == loShu[2][0] == loShu[2][1] == loShu[2][2])
			{
				cout << "Error ... " << num << " Invalid number. Try again";
				cout << "Number " << c << ": ";
				cin >> num;
			}
			
			loShu[Row][Col] = num;
			c++;
		}
		*/
		//loShu[Row][Col] = num;
	}

	cout << " -----------" << endl;
	cout << "| " << loShu[0][0] << " | " << loShu[1][0] << " | " << loShu[2][0] << "|" << endl;
	cout << " ___________" << endl;
	cout << "| " << loShu[0][1] << " | " << loShu[1][1] << " | " << loShu[2][1] << "|" << endl;
	cout << " -----------" << endl;
	cout << "| " << loShu[0][2] << " | " << loShu[1][2] << " | " << loShu[2][2] << "|" << endl;
	cout << " -----------" << endl;


}

void Getnumbers()
{
	
}