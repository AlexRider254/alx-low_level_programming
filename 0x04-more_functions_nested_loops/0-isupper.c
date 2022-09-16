#include "main.h"

/**
 * _isupper - Determines if a character is upper or not
 * @c: The integer representing the ascii value of the character
 *
 * Description: The function the character as the ascii and determines
 * whether is upper or not
 * Return: 1 (uppercase) or 0 (not uppercase)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
