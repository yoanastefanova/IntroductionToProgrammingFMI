// ConsoleApplication22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//колко пъти се съдържа един низ в друг
	char sentence[100], word[50];
	cin.getline(sentence,100);
	cin.getline(word, 50);
	int counter = 0;

	for (int i = 0; sentence[i] != '\0'; i++)
	{
		int j = 0; // в началото и след всяко несъответствие вторият низ започва от нула

		if (sentence[i] == word[0])//равна на първата буква от думата
		{
			for (j = 0; word[j] != '\0'; j++)
			{
				if (sentence[i + j] != word[j]) break;
			}
		}

		if (word[j] == '\0') counter++;//ако е стигнала до края 
	}

	cout << counter;
	


    return 0; 
}


