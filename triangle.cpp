// triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int NumRows;
	cout << "Enter the number of the rows: ";
	cin >> NumRows;

	for (int i = 0; i <= NumRows; i++)
	{
		
		int first = 1;
		
		for (int m = 0; m <= i; m++)
		{
			
			cout << first << "  ";
			first = first * (i - m) / (m + 1);
	
		}
		
		cout <<endl;
			
	}
	

	system("pause");
	return 0;
}

