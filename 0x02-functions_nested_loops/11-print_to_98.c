#include <stdio.h>

/**
 * print_to_98 - Prints allnatural numbers from input
 * to 98 in order of seperation by a comma followed by
 * a space
 * @n:The number to begin coumting at .
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
