// race.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int carsNum, startMin, startSec, finMin, finSec;
	cin >> carsNum;
	int diff = 0;
	int diff2 = 0;
	int i = 0;
	int minEl = 0;
	int index = 0;
	
	for (i = 0; i < carsNum;i++ )
	{
		diff2 = diff;
		diff = minEl;

		cin >> startMin >> startSec >> finMin >> finSec;
		

		int firstInSecs = startMin * 60 + startSec;
		int secondInSecs = finMin * 60 + finSec;
		diff = abs(secondInSecs - firstInSecs);
		
		
		if (diff > diff2)
		{
			minEl = diff2;
			index = i;
			
		}

	}
	
	
	int finalInMins = minEl / 60;
	int finalInSecs = minEl % 60;
	cout << finalInMins << " " << finalInSecs << endl;
	cout << index << endl;
	
	
	
	system("pause");
	return 0;
}
