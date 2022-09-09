#include <stdio.h>

/**
 * main - entry of the program
 *
 * Description: This program prints out all the alphabet
 * and then prints out a newline
 * Return: 0 (Successfull)
 */
int main(void)
{

	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if ((letter == 'e') || (letter == 'q'))
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');

	return (0);
}
