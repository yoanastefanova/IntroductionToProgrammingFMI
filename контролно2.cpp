// контролно2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int snum;
	cout << "Enter serial number: ";
	cin >> snum;

	int year = snum % 100;
	int day = (snum / 100) % 1000;

	if (day<=31)
	else if (day <= 59)
	{

	}


	if (year >= 0 && year <= 18) cout << "20";
	else cout << "19";
	cout << year;
}

