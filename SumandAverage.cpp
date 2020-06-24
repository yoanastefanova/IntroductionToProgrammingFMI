// SumandAverage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int rows = 3;
const int cols = 4;

int main()
{
	int matrix[rows][cols] = { {1,2,3,4}, {5,6,7,8},{9,10,11,12} }; 

	int sum = 0;
	double avg = 0.0;
	int counter = 0;

	for(int i=0;i<rows;i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += matrix[i][j];
			counter++;
		}
	}

	avg = sum / counter;
	cout << avg;



	return 0;
}

