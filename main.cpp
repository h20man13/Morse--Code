/*
 * main.cpp
 *
 *  Created on: Sep 26, 2018
 *      Author: jacob
 */
#include<iostream>
#include<string>
#include <stdlib.h>
#include "Morse.h"

using namespace std;
int main()
{
	srand(8);
	Morse::setSpaces(true);
	for(int i = 0; i < 10; i++)
	{
		cout << Morse::to_Morse(rand() % 3023) << endl;
	}

	cout << Morse::to_Morse("Hey Charlie whats up");
	return 0;
}
