// week09_func_02_odd,even.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

void populate(int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void EvenandOddNums(int * arr, int size)
{
	int counterEven=0;
	int counterOdd = 0;
	
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) counterEven++;
		else if (arr[i] % 2 == 1) counterOdd++;
	}

	cout <<"The number of the even numbers is: "<< counterEven << endl;
	cout << "The number of the odd numbers is: " << counterOdd << endl;
}



int main()
{
	int arr[SIZE];
	int elements;
	cin >> elements;
	populate(arr, elements);
	EvenandOddNums(arr,elements);

    return 0; 
}

