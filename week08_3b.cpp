// week08_3b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int rows;
int cols;
int matrix[100][100];





int main()
{
	cin >> rows >> cols;

	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}



	return 0;
}

