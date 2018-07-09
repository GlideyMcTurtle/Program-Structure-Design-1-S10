<<<<<<< HEAD
// This program takes two numbers (pay rate & hours)
// and multiplies them to get grosspay    
// it then calculates net pay by subtracting 15%
//
// Ahmad Tahiri #100356133

#include "stdafx.h"

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void printDescription(); 
void computePaycheck(float, int); 

int main()
{
	float payRate;
	int hours;
	
	cout << setprecision(2) << fixed;
	
	cout << "Welcome to the Pay Roll Program" << endl; 
	
	printDescription(); // Call to Description function
	
	cout << "Please input the pay per hour" << endl;
	cin >> payRate;
	
	cout << endl << "Please input the number of hours worked" << endl;
	cin >> hours;
	cout << endl << endl;
	
	computePaycheck(payRate,hours);
	
	cout << "We hoped you enjoyed this program" << endl;
	
	return 0;
}

//   ********************************************************************
//                         printDescription
//   
//   task:     This function prints a program description
//   data in:  none
//   data out: none
//
//   ********************************************************************
void printDescription()
{
    cout << "************************************************"  << endl << endl;
    cout << "This program takes two numbers (pay rate & hours)" << endl;
	cout << "and  multiplies them to get gross pay "            << endl;   
    cout << "it then calculates net pay by subtracting 15%"     << endl;
	cout << "************************************************"  << endl << endl;
}

//  *********************************************************************
//                        computePaycheck
//   
//   task:     This function takes rate and time and multiples them to
//             get gross pay and then finds net pay by subtracting 15%.
//   data in:  pay rate and time in hours worked
//   data out: the gross and net pay
//
//   ********************************************************************
void computePaycheck(float rate, int time)
{		 
	cout << "The gross pay is $" << (rate * time) << endl;
	cout << "The net pay is $" << (rate * time * 0.85) << endl; 
}
=======
// This program takes two numbers (pay rate & hours)
// and multiplies them to get grosspay    
// it then calculates net pay by subtracting 15%
//
// Ahmad Tahiri #100356133

#include "stdafx.h"

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void printDescription(); 
void computePaycheck(float, int); 

int main()
{
	float payRate;
	int hours;
	
	cout << setprecision(2) << fixed;
	
	cout << "Welcome to the Pay Roll Program" << endl; 
	
	printDescription(); // Call to Description function
	
	cout << "Please input the pay per hour" << endl;
	cin >> payRate;
	
	cout << endl << "Please input the number of hours worked" << endl;
	cin >> hours;
	cout << endl << endl;
	
	computePaycheck(payRate,hours);
	
	cout << "We hoped you enjoyed this program" << endl;
	
	return 0;
}

//   ********************************************************************
//                         printDescription
//   
//   task:     This function prints a program description
//   data in:  none
//   data out: none
//
//   ********************************************************************
void printDescription()
{
    cout << "************************************************"  << endl << endl;
    cout << "This program takes two numbers (pay rate & hours)" << endl;
	cout << "and  multiplies them to get gross pay "            << endl;   
    cout << "it then calculates net pay by subtracting 15%"     << endl;
	cout << "************************************************"  << endl << endl;
}

//  *********************************************************************
//                        computePaycheck
//   
//   task:     This function takes rate and time and multiples them to
//             get gross pay and then finds net pay by subtracting 15%.
//   data in:  pay rate and time in hours worked
//   data out: the gross and net pay
//
//   ********************************************************************
void computePaycheck(float rate, int time)
{		 
	cout << "The gross pay is $" << (rate * time) << endl;
	cout << "The net pay is $" << (rate * time * 0.85) << endl; 
}
>>>>>>> 97bc8ff8a2730e66d2c96a63f4aa3c718281e337
