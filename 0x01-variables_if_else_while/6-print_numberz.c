#include <stdio.h>

/**
 * main - entry of program
 * Description: Prints out all the numbers that makeup the
 * decimal number system
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num=0, num < 10, num++)
	{
		putchar('0' + num);
	}
	putchar('\n');

	return (0);
}
