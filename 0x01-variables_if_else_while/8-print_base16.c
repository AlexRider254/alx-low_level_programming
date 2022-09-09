#include <stdio.h>

/**
 * main - entry point of the program
 * Description: Program that prints all the numbers
 * that have a base of 16 and afterwards prints
 * a newline
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		putchar('0' + num);
	}
	else if (num >= 10)
	{
		putchar('a' + num%10);
	}
	putchar('\n');

	return (0);
}
