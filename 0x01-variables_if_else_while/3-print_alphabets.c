#include <stdio.h>

/**
 * main - entry of the program
 *
 * Description: This program prints out all the letters of the alphabet in
 * lowercase and then prints it again in uppercase
 * and then prints out newline
 * Return: 0 (Successfull)
 */
int main(void)
{

	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}


