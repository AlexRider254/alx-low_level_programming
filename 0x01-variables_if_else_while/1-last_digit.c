#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry of the program
 * Description: A random number 'n'is generated and the last
 * digit will be displayed hence determining what kind of 
 * should be printed
 *  Return: 0 (Successfull)
 */
int main(void)
{
	int n;
	srand(time(0));
	n= rand - RAND-MAX / 2;


	if (last_digit>5)
	{
		printf("Last digit of %d is %d and is greater than 5\n" ,
			n , last_digit);
	}
	else if ((last_digit<6) && (last_digit != 0))
	{
		printf("Last digit of %d is %d and is less than 6\n and not 0"
			,n ,last_digit);
	}
	else if (last_digit==0)
	{
		printf("Last digit of %d is %d and is 0\n" ,  n , last_digit);
	}
}