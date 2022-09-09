#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry of the program
 * Description: This program  generates a random number but using a series
 * of if, else if statetments to determine whether the number is
 * positive or negative
 * Return: 0 (Successfull)
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);

}


