// This program illustrates the use of the if and else if statement.
// Exercise #3
// Ahmad Tahiri #100356133
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char grade;
	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;

	if (grade == 'A')
		cout << "excellent work! You got an A" << endl;
	if (grade == 'B')
		cout << "Good Job! You got an B" << endl;
	if (grade == 'C')
		cout << "You passed You got an C" << endl;
	if (grade == 'D')
		cout << "You Barely Passed You got an D" << endl;
	if (grade == 'F')
		cout << "You have Failed You got an F" << endl;
	else if (grade != 'A' || 'B' || 'C' || 'D' || 'F')
		cout << "Invalid Grade" << endl;

	system("pause");
    return 0;
}

