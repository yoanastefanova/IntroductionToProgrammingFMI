// watch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter an integer number representing the minutes:";
	cin >> n;
	
	int hours = n / 60;
	int minutes = n % 60;
	
		
	if (hours >= 24)
	{
		int hours = (n / 60) - 24;
		cout << hours << "   " << minutes << endl;
	}

	else
	cout << hours << " hours and " << minutes <<" minutes have passed."<<endl;

}

