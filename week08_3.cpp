// week08_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int  rows;
int  cols;
int matrix[100][100];


void mainDiag() 
{

	for (int i = 0; i < rows; i++)
	{
		matrix[i][i] = i;
	}

}

void AboveMainDiag()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i < j)
			{
				matrix[i][j] = j - i;
			}
		}
	}
}

void BelowMainDiag()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i > j)
			{
				matrix[i][j] = i * j;
			}
		}
	}
}

int main()
{

	cin >> rows >> cols;

		mainDiag();
		AboveMainDiag();
		BelowMainDiag();

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout<< matrix[i][j];
			}
			cout << endl;
		}
	

	return 0;
}


