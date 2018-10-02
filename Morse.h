/*
 * Morse.h
 *
 *  Created on: Sep 26, 2018
 *      Author: jacob
 */
#include <string>

using namespace std;

#ifndef MORSE_H_
#define MORSE_H_

class Morse
{
	public:
    static string to_Morse(int par);
    static string to_Morse(char par);
    static string to_Morse(string par);
    static void setSpaces(bool tf);
	private:
    static bool spaces;
    static const char alphabet[5][32];
    static const int endings[5];
    static int numCount(int x);
    static string construct(int total, int in);
};

#endif /* MORSE_H_ */
