// Name : Deepika Kumaran
// Purpose: Multiply Program 
//Create a program that outputs the Multiplication table with nested loops

#include "stdafx.h"
#include "iostream"
using namespace std;


int main(void)
{
	cout << "Multiplication Table in C++ " << endl;


	for (int a = 0; a < 11; a++)
	{
		cout << a << "|";
		for (int i = 0; i < 11; i++)

		{
			cout << i * a << '\t';
		}

		cout << endl;
	}

	system("pause");
	return 0;
}
