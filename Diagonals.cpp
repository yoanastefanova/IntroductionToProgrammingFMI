// Diagonals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int rows = 100;
const int cols = 100;

int main()
{
	int matrix[rows][cols];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++)//main  diagonal
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				cout << matrix[i][j] << " ";
			}
		}

	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == n - j - 1)
			{
				cout<<matrix[i][j] << " ";
			}
		}
	}


	return 0;
}

