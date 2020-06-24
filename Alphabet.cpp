// Alphabet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	char alphabet[26];
	
	

	for (char i = 'a'; i <= 'z'; ++i)
	{
		alphabet[i - 'a'] = i;
		
	}
	
	char text[150];
	char word;
	int idx = 0;


	do
	{
		cin >> word;
		text[idx++] = word;
	} while (word != '!');


	for (int i = 0; text[i] != '!'; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (text[i] == alphabet[j])
			{
				cout << j << endl;
			}
		}
	}


	return 0;
}

