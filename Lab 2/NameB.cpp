// NameB.cpp : 
// Ahmad Tahiri #100356133

#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string address;
	string city;
	string state;
	string zip;
	string phone;

	cout << "What is your name?" << endl;  // Asking for name
	getline(cin, name);
	cout << "What is your address?" << endl; // Creepy Question 
	getline(cin, address);
	cout << "What City do you live in?" << endl; // Asking for City 
	getline(cin, city);
	cout << "State/Province do you live in?" << endl; // Asking for State/ province
	getline(cin, state);
	cout << "What is your zipcode?" << endl; // Asking for Zipcode
	getline(cin, zip);
	cout << "What is your phone number?" << endl; // Asking for phone #
	getline(cin, phone);
	// Getting Info

	cout << name << endl;
	cout << address << endl;
	cout << city << "," << state << "," <<  zip << endl;
	cout << phone << endl;
	// Display Info





	system("pause");
	return 0;
}


