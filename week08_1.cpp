// week08_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//abs
/*
int absolute(int number)
{
	if (number < 0)
	{
		number = number * (-1);
		return number;
	}

	else
	{
		number = number;
		return number;
	}
}
*/


//power
/*
int power(int number, int n)
{
	int result = 1;

	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			result = result * number;
		}
		return result;
	}

	else if (n == 0) return 1;
			
}
*/


//minof2
 /*
int MinOf2(int number1, int number2)
{
	if (number1 > number2)
	{
		return number2;
	}

	else if  (number1 < number2)
	{
		return number1;
	}
}
*/


//maxof2

/*
int MaxOf2(int number1, int number2)
{
	if (number1 > number2)
	{
		return number1;
	}

	else if (number2 > number1)
	{
		return number2;
	}
}
*/


//minof3

/*
int MinOf3(int num1, int num2, int num3)
{
	if (num1 < num2 && num1 < num3)
	{
		return num1;
	}

	else if (num2 < num1 && num2 < num3)
	{
		return num2;
	}

	else if (num3 < num1 && num3 < num2)
	{
		return num3;
	}

}
*/

//maxof3
/*
int MaxOf3(int num1, int num2, int num3)
{
	if (num1 > num2 && num1 > num3)
	{
		return num1;
	}

	else if (num2 > num1 && num2 > num3)
	{
		return num2;
	}
	
	else if (num3 > num1 && num3 > num2)
	{
		return num3;
	}

}
*/



int isAlpha();




int main()
{
	//abs
	/*
	int number;
	cout << "Enter a number: ";
	cin >> number;
	cout << absolute(number) << endl;
	*/


	//power
	/*
	int number, n;
	cin >> number >> n;
	cout << power(number, n);
	return 0;
	*/

	//minof2
	/*
	int number1, number2;
	cin >> number1 >> number2;
	cout << MinOf2(number1, number2);
	*/


	//maxof2

	/*
	int number1, number2;
	cin >> number1 >> number2;
	cout << MaxOf2(number1, number2);
	*/

	//minof3

	/*
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	cout << MinOf3(num1, num2, num3);
	*/

	//maxof3

	/*
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	cout << MaxOf3(num1, num2, num3);
	*/



	
}

