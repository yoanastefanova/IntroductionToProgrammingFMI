// task06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number;
	long factorial = 1;
	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		factorial = factorial * i;
	}

	cout << "The factorial of " << number << " is " << factorial;



}

