// контролно1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double price;
	cin >> price;
	if ((price >= 99.9 && price <= 250) || price >= 1499.99)//булевият израз
	{
		cout << "It's okay." << endl;
	}
	else
	{
		cout << "It's not okay." << endl;
	}



}

