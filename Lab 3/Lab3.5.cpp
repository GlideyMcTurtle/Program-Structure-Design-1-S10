// Lab3.5.cpp : This Program will find the Avrage of your grades. Option 1
//Ahmad Tahiri #100356133

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int grade1, grade2, grade3, sum;
	float avg;



	cout << "Please enter your first grade." << endl;
	cin >> grade1;
	cout << "Please enter your second grade." << endl;
	cin >> grade2;
	cout << "Please enter your third grade." << endl;
	cin >> grade3;

	sum = grade1 + grade2 + grade3;
	avg = sum / 3;
	cout << "Your average grade is:" << avg << endl;

	system("pause");
    return 0;
}

