#include <stdio.h>
/**
 * main - entry to  the program
 * Description: The program puts all the number that make a
 * decimal number system
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10 ; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);

}
