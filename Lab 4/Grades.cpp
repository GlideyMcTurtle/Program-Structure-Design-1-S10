// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise
// Ahmad Tahiri #100356133
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	float average; // holds the grade average
	cout << "Input your average:" << endl;
	cin >> average;
	
	
		if (average >= 100)
			cout << "excellent Job!" << endl;
		

		else if (average >= 89)
			cout << "Good Job!" << endl;
		

		else if (average >= 59)
			cout << "You Passed" << endl;
		

		else if (average < 49 || average < 100)
			cout << "You Faild" << endl;
		






	system("pause");
    return 0;
}

