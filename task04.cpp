// task04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	int counter = 0;
	int initial = 5;
	char voucher[15];
	

	cout << "Enter 1 to check your balance." << endl;
	cout << "Enter 2 to charge your voucher." << endl;
	cout << "Enter 3 to exit." << endl;
	   
	do

	{
		cin >> n;

		switch (n)
		{

		case 1:
		{
			cout << "Your current balance is: " << initial << endl;
			cout << endl;
			cout << "Enter 1 to check your balance." << endl;
			cout << "Enter 2 to charge your voucher." << endl;
			cout << "Enter 3 to exit." << endl;
			break;
		}
		case 2:
		{
			cout << "Enter your voucher code: ";
			cin >> voucher;
			for (int i = 0; voucher[i]; i++)
			{
				if (voucher[i] == '5') counter++;
			}

			if (counter == 3)
			{
				initial = initial + 10;
			}
			else cout << "Your voucher isn't valid!" << endl;


			cout << "Enter 1 to check your balance." << endl;
			cout << "Enter 2 to charge your voucher." << endl;
			cout << "Enter 3 to exit." << endl;
			break;
		}
		case 3: break;
		default:break;
		}
		
	} 
	
	while (n == 1 || n == 2);
	
	return 0;
}

