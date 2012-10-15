//============================================================================
// Name        : Lab1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Hello World" << endl; // prints Hello World

	int i;
	int box_size;
	cout << "Please Enter Box Size : ";
	cin >> box_size;

		for (i=0;i<box_size;i++)
		{
			cout<<"-+-";
		}

	return 0;
}
