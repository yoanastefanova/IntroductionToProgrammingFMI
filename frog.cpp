// frog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int  n, t;
	int position = 0;
	cin >> n;
	cin >> t;

	int helper1 = t % n;
	int helper2 = t / n;

	if (helper2 % 2 == 0)
	{
		position = helper1;
	}
	
	else
	{
		position = n - helper1;
	}

	cout << position << endl;

	return 0;
	
	

	
	

    
}

