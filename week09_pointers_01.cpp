// week09_pointers_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void exchange(int num1, int num2)
{
	int * pointer1, *pointer2;
	int helper;

	pointer1 = &num1;

	pointer2 = &num2;

	helper = *pointer1;
	*pointer1 = *pointer2;
	*pointer2 = helper;
	
	cout << *pointer1 << endl << *pointer2;
	


}

int main()
{
	int number1, number2;
	cout << "The first number is: ";
	cin >> number1;
	cout << "The second number is: ";
	cin>> number2;
	//int helper = 0;

	cout << "The swapped values are: " << endl;
	exchange(number1, number2);



    return 0; 
}

