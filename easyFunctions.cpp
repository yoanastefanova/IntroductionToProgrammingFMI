// easyFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

/*int power(int num)
{
	return num * num;
}
*/


/*
int factorial(int num)
{
	if (num == 0) return 1;
	if (num == 1) return 1;

	 return num*factorial(num-1);
}
*/

/*
bool isEven(int num)
{
	if (num % 2 == 0) return true;
}
*/

/*
int isPrime(int num)
{	
	bool flag = true;

	for (int i = 2; i <= num / 2; i++)
	{
	
		if (num%i == 0)
		{
			flag = false;
		}	
	}
	return flag;
}
*/

/*
int Interesting(int num)
{
	
	while (num)
	{
		int firstDigit = num % 10;
		int secondDigit = (num / 10) % 10;

		if (firstDigit > secondDigit)
		{
			return false;
		}

		num = num / 10;
	}	 
	return true;
}
*/


int isPowerOfTwo(int num)
{
	//if (num < 0) return false;

	while (num!=1)
	{
		if (num % 2 != 0) return false;
	
		
		num = num / 2;		
	}
	return true;
}

int main()
{
	
	int a;
	cin >> a;

	if (isPowerOfTwo(a) == true)
	{
		cout << boolalpha << true << endl;
	}
	
	if (isPowerOfTwo(a) == false)
	{
		cout << boolalpha << false << endl;
	}
	




	return 0;
}

