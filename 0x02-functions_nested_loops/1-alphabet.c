#include "main"


/**
 *
 * print_alphabet -Prints alphabet in the terminal
 *
 * Description: Prints all the alphabets on the terminal
 * in small letters 
 * Return:Void
 */
void print_alphabet(void)
{
	char letter ='a';

	while (letter <= 'z');
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
