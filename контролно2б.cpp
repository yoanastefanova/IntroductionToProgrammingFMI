// контролно2б.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int id;
	cout << "Enter id: ";
	cin >> id;

	int gender = id % 10;
	int day = (id / 10) % 100;
	int month = (id / 1000) % 100;
	int year = id / 100000;

	bool flag = false;


	if (gender % 2 == 0) cout << "Male" << endl;
	else cout << "Female" << endl;

	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31) flag=true;
	else if (((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)) flag = true;
	else if (month==2 && day > 28) flag=true;


	if (gender%2==1 ) flag = true;

	if (month>12) flag = true;
		if (flag == false)
		{
			cout<<day<<"."<<month<<"."<<year<<endl;
		}
		else
		{
			cout << "Divorce!";
		}
}

