// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

void InputArr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void swap(int & num1, int & num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void ReverseArr(int *arr, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size - i - 1]);

	}
}

void PrintArr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}



int main()
{
	int arr[SIZE];
	int size;
	cin >> size;

	InputArr(arr, size);
	ReverseArr(arr, size);
	PrintArr(arr, size);


	return 0;
}

