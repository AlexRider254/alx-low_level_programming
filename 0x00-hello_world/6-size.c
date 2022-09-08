#include <stdio.h>

/**
 * Description: Prints the size of different types in C to
 * the terminal depending on whether it is a 32-bit 
 * or a 64-bit system
 * Return: 0 (success)
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);

}
