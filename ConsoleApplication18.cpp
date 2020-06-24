// ConsoleApplication18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int ROWS = 100;
const int COLS = 100;

void InputMatrix(int matrix[][COLS], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void EvenAndOddRows(int matrix[][COLS], int rows, int cols)
{
	

	for (int i = 0; i < rows; i++)
	{
		int times = 1;
		int sum = 0;

		for (int j = 0; j < cols; j++)
		{
			if (i % 2 == 0)//за нечетен ред (==0, защото индексът за реда започва от 0 - 0,1,2 е всъщност 1,2,3)
			{
				times = times * matrix[i][j];
			}

			if (i % 2 == 1)
			{
				sum = sum + matrix[i][j];
			}

		}
		if (times > sum) cout << true;
	}

}

int main()
{
	int matrix[ROWS][COLS];
	int rows, cols;
	cin >> rows >> cols;

	InputMatrix(matrix, rows, cols);
	EvenAndOddRows(matrix, rows, cols);


	return 0;
}

