// контролно4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	

	


	
	int n, k;
	int counter = 0;
	cout << "Enter n= ";
	cin >> n;
	cout << "Enter k= ";
	cin >> k;
	bool flag = true;
	bool doubleNum = false;
	int i = n, ok;// i се дефинира тук

	while (counter != k)//върти се докато не намери числата, counter се увеличава
	{
		flag = true;
		doubleNum = false;
		ok = i;

		while (flag && ok > 0)
		{
			if (ok % 10 < (ok / 10) % 10) flag = false;//намаляващ вид - < ; растящ вид - >
			if (ok % 10 == (ok / 10) % 10) doubleNum = true;// две еднакви цифри една след друга
			ok = ok / 10;
		}
		
		if (flag&&doubleNum)
		{
			cout << i << endl;
			counter++;
		}

		i++;//i се увеличава
	}
	
}

