// week10_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


const int size = 100;
/*
void alpha()
{
	for (char ch = 'A'; ch <= 'z'; ch++)
	{
		cout << ch << " ";

		if (ch == 'Z') cout << endl;
		ch=ch+ 
	}

}

*/
int strlen(char*text)
{
	int counter = 0;
	for (int i = 0; text[i] != '\0'; i++)
	{
		counter++;
	}
	return counter;
}



int main()
{
	char text[100];
	cin >> ws;//премахва празното място и не го брои
	cin.getline(text, 100); //първо-в коя променлива записва, 2-ро - колко да е голямо, 3-то - къде да спре

	cout << strlen(text);


    return 0; 
}

