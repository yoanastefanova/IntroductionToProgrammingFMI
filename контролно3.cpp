// контролно3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, counter = 0, sum = 0;
	cin >> a;
	cin >> b;

	for (int i = a; i <= b; i++)
	{
		if ((i*i) % a == (i*i) % b)
		{
			counter++;
			sum += pow(i, 2);
		}
	}
	cout << sum << "   " << counter;
	return 0;
}

