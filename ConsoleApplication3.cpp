// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char choice;
	cin >> choice;
	switch (choice) {
	case 'A': cout << fixed << showpoint << setprecision(2) << choice;
		break;

	case 'B' || 'C': cout << fixed << showpoint << setprecision(4) << choice;
		break;

	case 'D': cout << fixed << showpoint << setprecision(6) << choice;
		break;

	default: cout << fixed << showpoint << setprecision(8) << choice;	
	}
	return 0;

} 

