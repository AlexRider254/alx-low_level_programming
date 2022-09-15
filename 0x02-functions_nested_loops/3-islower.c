#include "main.h"
/**
 * _islower - function to check for lowercase characters
 * @c: is the argument that will use for the argument for the functiom
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
