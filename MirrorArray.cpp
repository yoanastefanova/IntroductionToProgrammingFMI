// MirrorArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int const elements = 100;

int main()
{
	int arr[elements];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	bool Mirror = false;
	
	
	int j;

	for (int i = 0, j=n-1; i < j; i++, --j)
	{
		if (arr[i] == arr[j])
		{
			Mirror = true;
		}
	}
			
		cout << boolalpha << Mirror << endl;

	return 0;
}

