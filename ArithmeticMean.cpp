// ArithmeticMean.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int const elements = 100;

int main()
{
	int num;
	int arr[elements];
	cin >> num;
	

	for (int i = 0; i < num; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
		
	int sum = 0;
	int arithmeticMean;

	for (int i = 0; i < num; i++)
	{
		sum += arr[i];
	}
	
	arithmeticMean = sum / num;
	int minNum = arr[0];
	cout << minNum;
	//cout << arithmeticMean;

	//int smaller[elements];
	//int smallerEl;

	/*
	for (int i = 0; i < num; i++)
	{
		if (arr[i] < arithmeticMean)
		{
			arr[i] = smallerEl;
		}
	}
	*/


	return 0;
}


