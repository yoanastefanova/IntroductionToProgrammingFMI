// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


int const SIZE = 100;

void InputArr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}


int shift(int *arr, int size, int positions)
{	
	for (int i = 0; i < size; i++)
	{
		if (i + positions <= size - 1) 
		{
			arr[i] = arr[i + positions];
		}

		else if (i + positions > size - 1)
		{
			arr[i]=arr[]
		}
	}
		


}


int main()
{
	int arr[SIZE];
	int size;
	cin >> size;




   return 0; 
}


