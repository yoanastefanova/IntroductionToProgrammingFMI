// whatFib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n, next;
	int a1 = 1, a2 = 1, position=2;
	cin >> n;
	
	for (int i = 1; a2 < n; i++)
	{
		next = a1 + a2;
		a1 = a2;
		a2 = next;
		
		position++;
		
		
		if (n==a2)
		{
			
			cout << position<< endl;
		}
		
		else if (n < a2)
		{
			cout << "-1" << endl;
		}
		
		
		
	}
	if (n == 1) cout << "1" << endl;
	
	
	
	

	system("pause");
	return 0;
}


