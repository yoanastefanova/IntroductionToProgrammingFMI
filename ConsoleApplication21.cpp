// ConsoleApplication21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{ 
	//извежда всяка дума на нов ред
	char str[100];
	cin.getline(str, 100);

	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ') cout << str[i];

		else cout << endl;

		i++;
	}


	return 0;
	
}


