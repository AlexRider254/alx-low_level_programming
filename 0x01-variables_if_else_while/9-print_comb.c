#include <stdio.h>
/**
 * main - entry of the program
 * Description: The program prints out all the possible combination of
 * single digit
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');

	return (0);
}
