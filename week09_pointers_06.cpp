// week09_pointers_06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

void populate(double *arr, int elements)
{
	for (int i = 0; i < elements; i++)
	{
		cin >> arr[i];
	}
}

double Average(int num1, int num2)
{
	return (num1 + num2) / 2;
}


int findIndex(double *arr, int elements)
{
	int index = -1;

	for (int i = 0; i < elements; i++)
	{
		if (i == 0)
		{
			if (arr[0] == arr[i] / 2)
			{
				index = i;
			}
		}

		else if (i == elements - 1)
		{
			if (arr[elements - 1] == ( arr[elements - 2] / 2))
			{
			index = i;
			}
		}

		else if (Average(arr[i - 1], arr[i + 1]) == arr[i])

		{
			index = i;
		}


	}
	return index;
}


int main()
{
	
	int elements;
	cin >> elements;
	double arr[SIZE];

	populate(arr,elements);
	cout <<"The index is: "<< findIndex(arr, elements) << endl;

	return 0;
}
