// ConsoleApplication17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int ROWS = 100;
const int COLS = 100;

void InputMatrix (int matrix[][COLS], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

// извежда индекса на колоната, чиято сума от цифрите е най-голяма

void SumColsMax (int matrix[][COLS], int rows, int cols)
{
	int max = 1;
	int index = 0;//променлива, която да пази номера на колоната, в която ще намерим максимална сума

	for (int i = 0; i < rows; i++)
	{
		int sum = 0;// занулява се всеки път, за да проверява за всяка следваща колона
		
		
		for (int j = 0; j < cols; j++)
		{
			sum = sum + matrix[j][i];// обикаля по колони
		}

		if (sum > max)
		{
			max = sum;
			index = i;
		}

	}
	cout << index+1;
}

int main()
{
	int matrix[ROWS][COLS];
	int rows, cols;
	cin >> rows >> cols;

	InputMatrix(matrix, rows, cols);
	SumColsMax(matrix, rows, cols);

	return 0;
}

