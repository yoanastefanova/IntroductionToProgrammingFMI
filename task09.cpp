// task09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	int digits = 0;

	if (number >= 10 && number <= 30000)
	{
		while (number)
		{
			number = number / 10;
			digits++;
		}
		cout << digits << endl;
	}

	else cout << "Incorrect input!" << endl;

	return 0;
}

