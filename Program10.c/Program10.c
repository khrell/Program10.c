/*

Name: Program10.C

Programmer: Shawn San Miguel

Class: COSC 1336.001

Date: 11-8-16

*/

#include <stdio.h>
#include <stdlib.h>
typedef enum  {TRUE,FALSE} boolean_t;


boolean_t is_letter(char letter);
int count_words(char string1[]);
double convert_to_double(double s);


int main()
{
	//part 2
	char letter = ' ';
	is_letter(letter);
	
	//part 3
	char string1[100] = "this is a test of the test tmp";
	int z = count_words(string1);
	printf("\nPart 3:\n");
	printf("Number of words in the string: %d\n\n", z);

	//Part 4	
	double s;
	
	double y = convert_to_double(s);
	printf("The number converted to a double: %f", y);

	return 0;
}
// Part 2 Takes input and checks to see if it's in the alphabet
boolean_t is_letter(char letter)
{
	//two variables created for return
	boolean_t myBoolTrue = { TRUE };
	boolean_t myBoolFalse = { FALSE };
	printf("\nPart 2:\n");
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

//Part 3 Word Counting Loop
int count_words(char string1[])
{
	int i = 0;
	int tmp = 0; //loop counter index

	//loop for counting the words
	for (i = 0; string1[i] != '\0'; i++)
	{
		{
			if (string1[i] == ' ')

				tmp++;
		}
	}
	return tmp;
}

//Part 4 Convert to Double
double convert_to_double(double s)
{
	double s1;
	char input[9];
	printf("Enter up to a nine digit number: ");
	gets(input);
	s1 = atof(input);
	
	return s1;
}