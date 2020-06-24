// MinMax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int rows = 3;
const int cols = 3;

int main()
{
	
	int arr[rows][cols];
	

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}

	int min = arr[0][0];
	int max = arr[0][0];


	for (int k = 0; k < rows; k++)
	{
		for (int l = 0; l < cols; l++)
		{
			if (min > arr[k][l])
			{
				min = arr[k][l];
			}

			if (max < arr[k][l])
			{
				max = arr[k][l];
			}
		}
	}

	cout << "Min = ";
	cout << min << endl;
	cout << "Max = ";
	cout << max << endl;




	return 0;

}

