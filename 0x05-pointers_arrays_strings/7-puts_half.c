#include "main.h"

/**
 * puts_half - prints the second half of a string to the screen
 * @str: String to be printed to the screen
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int index, half;

	index=0;
	while (str[index] != '\0')
		index++;
	half = index / 2;
	if (index % 2 == 1)
		half++;
	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
