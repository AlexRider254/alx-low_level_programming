#include <time.h>
#include <stdio.h>
/**
 * main - entry of the program 
 * Description: The program grnerates a random number ,then
 * gets the last digit and determines what to display
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is greater than 5\n", n, 
				last_digit);
	}
	else if ((last_digit != 0) && (last_digit < 6 ))
	{
		printf("Last digit of %d and is %d is less than 6 and not 0\n", 
				n, last_digit);
	}
	else if (last_digit != 0)
	{
		printf("Last digit of %d is 0\n", n, lat_digit);
	}

	return (0);
}

