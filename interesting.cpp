// interesting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int total, number;
	int last, last1, NewNum;
	int counter1 = 0, counter2 = 0;
	cin >> total;


	for (int i = 1; i <= total; i++)
	{
		cin >> number;

		last = number % 10;
		NewNum = number / 10;
		last1 = NewNum % 10;


		if (last < last1)
		{
			counter1++;
			{

				for (int j = 1; j <= counter1; j++)
				{

					cout << "NO" << endl;
				}
			}
		}

		else
		{

			counter2++;
			for (int k = 1; k <= counter2; k++)
			{
				cout << "YES" << endl;
			}

		}
	}

	return 0;
}

    



