/*

Name: Program10.C

Programmer: Shawn San Miguel

Class: COSC 1336.001

Date: 11-8-16

*/

#include <stdio.h>
typedef enum  {TRUE,FALSE} boolean_t;


boolean_t is_letter(char letter);
int count_words(char string1[], int i);


int main()
{
	//part 2
	char letter = ' ';
	is_letter(letter);
	
	//part 3
	char string1[200];
	int i = 0;
	int count = count_words(string1,i);
	printf("Length of string: %d\n", count);

	return 0;
}
// Part 2 Takes input and checks to see if it's in the alphabet
boolean_t is_letter(char letter)
{
	//two variables created for return
	boolean_t myBoolTrue = { TRUE };
	boolean_t myBoolFalse = { FALSE };
	printf("Please enter a single character of the alphabet: ");
		scanf("%s", &letter);

		//loop to check it the character is in the alphabet, lowcase and uppercase
		if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
		{
			return myBoolTrue;
			
		}
		else
		{
			return myBoolFalse;
			
		}
}

//part 3
int count_words(char string1[], int i)
{

	int count = 0;
	int x = '\0';
	printf("Enter a string: ");
	scanf("%s", string1);

	while (string1[i] != x)
	{
		if (string1[i] == ' ')
		{
			count++;
		}		
	}
	return count;
}

