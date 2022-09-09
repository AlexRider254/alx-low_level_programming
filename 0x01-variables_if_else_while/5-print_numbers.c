#include <stdio.h>

/**
 * main - entry of a program
 * Description: The program prints all the numbers
 * that makeup the decimal number
 * syste
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	putchar('\n');

	return (0);
}
