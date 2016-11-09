/*

Name: Program10.C

Programmer: Shawn San Miguel

Class: COSC 1336.001

Date: 11-8-16

*/

#include <stdio.h>
typedef enum  {TRUE,FALSE} boolean_t;


boolean_t is_letter(char letter);


int main()
{
	char letter = ' ';
	is_letter(letter);


	return 0;
}
boolean_t is_letter(char letter)
{
	boolean_t myBoolTrue = { TRUE };
	boolean_t myBoolFalse = { FALSE };
	printf("Please enter a single character of the alphabet: ");
		scanf("%s", &letter);

		if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
		{
			return myBoolTrue;
			
		}
		else
		{
			return myBoolFalse;
			
		}
}
