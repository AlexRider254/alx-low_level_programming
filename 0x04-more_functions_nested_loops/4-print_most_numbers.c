#include "main.h"

/**
 * print_most_numbers - prints most numbers
 *
 * Description: prints out numbers from 0 to 9 to terminal
 * except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		if (n == 2 || n == 4 )
		{
			n++;
			continue;
		}
		else
		{
			_putchar('0' + n);
		}
		n++;
	}
	_putchar('\n');
}
