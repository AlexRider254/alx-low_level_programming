#include "main.h"

/**
 * print_numbers - prints the numbers in the terminal
 *
 * Description prints the number from 0 - 9
 * to the terminal
 * Return: void
 */

void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
