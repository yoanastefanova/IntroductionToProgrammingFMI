// TurnedMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int rows = 10;
const int cols = 10;
const int MAX_SIZE = 10;
int main()
{

	// ????????
	int matrix[rows][cols];
	int row=0;
	int col=0;
	cin >> row;
	cin >> col;
	

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}

	int helper;
	
	
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			matrix[i][j] = matrix[row - 1 - j][i];
			helper = matrix[i][j];
		}

	}
	cout << helper;


	return 0;

	return 0;
}

