// контролно3б.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number, first;
	int counter = 0, sum =0 ;
	cin >> number;
	first = number;

	while (first >= 10)
	{
		first = first / 10;

	}
	while (number >= 10)
	{
		if (number % 10 > first) counter++;
		else if (number % 10 < first) sum += number % 10;

		number = number / 10;

	}
	cout << "sum=" << sum;
	cout << "counter=" << counter;
}

