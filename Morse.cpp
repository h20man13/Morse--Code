/*
 * Morse.cpp
 *
 *  Created on: Sep 26, 2018
 *      Author: jacob
 */
#include "Morse.h"
#include <string>
using namespace std;

void Morse::setSpaces(bool tf)
{
	spaces = tf;
}

string Morse::to_Morse(int par)
{
	if(par <= 9  && par >= 0)
	{
		return to_Morse(char(par + (int('0'))));
	}
	else
	{
		return to_Morse(construct(numCount(par), par));
	}
}

string Morse::to_Morse(string par)
{
	string max = "";
	for(unsigned int i = 0; i < par.length(); i++)
	{
		if(par.at(i) != ' ')
		{
			max += to_Morse(par.at(i));
		}
		if(spaces)
		{
			max += " ";
		}
	}
	return max;
}

string Morse::to_Morse(char par)
{
	if(par == ' ')
	{
		return " ";
	}
	else
	{
		string awnser = "";
		if(isupper(par))
		{
			par = tolower(par);
		}
		for(int down = 0; down < 5; down++)
		{
			for(int side = 0; side < endings[down]; side++)
			{
				if(par == alphabet[down][side])
				{
					int x = side;
					for(int i = down; i >= 0; i--)
					{
						if(x % 2 == 0)
						{
							awnser += '.';
							x /= 2;
						}
						else if(x % 2 == 1)
						{
							awnser += '-';
							x /= 2;
						}
					}
				}
			}
		}
		return awnser;
	}
}

int Morse::numCount(int x)
{
	int count = 0;
	while(x > 1)
	{
		x /= 10;
		count ++;
	}
	return count;
}

string Morse::construct(int total, int in)
{
	string mine = "";
	for(int i = total - 1; i >= 0; i--)
	{
		mine += char((in % 10) + int('0'));
		in /= 10;
	}
	char hold;
	for(unsigned int i = 0; i < mine.size() / 2; i++)
	{
		hold = mine.at(i);
		mine.at(i) = mine.at(mine.size() - (i + 1));
		mine.at(mine.size() - (i + 1)) = hold;
	}
	return mine;
}
bool Morse::spaces = true;

const char Morse::alphabet[5][32]
{
{'e','t'},
{'i','a','n','m'},
{'s','u','r','w','d','k','g','o'},
{'h','v','f',' ','l',' ','p','j','b','x','c','y','z','q'},
{'5','4',' ','3',' ',' ',' ','2',' ',' ',' ',' ',' ',' ',' ','1','6',' ',' ',' ',' ',' ',' ',' ','7',' ',' ',' ','8',' ','9','0'}
};
const int Morse::endings[5]{2,4,8,14,32};
