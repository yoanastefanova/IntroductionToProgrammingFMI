// week09_pointers_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


const int SIZE = 300;

void RemoveVowels(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y')
		{
			str[i] = ' ';		
		}
		
	}
	cout << str;
	
}

int main()
{
	char str[SIZE];
	cin >> str;

	RemoveVowels(str);

	//cout << str;




	return 0;
}

