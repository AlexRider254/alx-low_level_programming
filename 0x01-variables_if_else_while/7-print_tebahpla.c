#include <stdio.h>

/**
 * main - entry of the program
 * Description: This program prints all the alphabets
 * in a reverse mannner and afte that it prints a new
 * line
 * Return: 0 9 (Success)
 */
int main(void)
{

	char letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
