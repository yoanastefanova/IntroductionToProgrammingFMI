// nonNegative.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	cin >> n;
	
	while ( n >= 0)
	{
		cin >> n;
		sum++;
	}
	cout << sum;

}


