// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std; 

int main()
{
	// брои колко знака има + интервалите
	// проверява колко пъти се съдържа въведен символ в низа

	char str[100];
	char sym;
	cin.getline(str, 100);
	cin >> sym;
	int counter = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == sym)  counter++;

		i++;		
	}
	cout << i << endl;
	cout << counter;
	return 0;
}


