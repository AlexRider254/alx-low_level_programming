#include "main.h"
/**
 * print_alphabet - Introduction to the program
 * Description: Function that prints abc
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
