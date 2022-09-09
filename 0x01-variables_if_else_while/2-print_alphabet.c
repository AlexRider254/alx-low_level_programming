#include <stdio.h>
/**
 * main - entry of the program
 * Description: This program puts out alphabet in lower
 * case and prints out newline
 * Return: 0 (Successfull)
 */
int main(void)
{
	char letter;

	letter = 'a';
	
	while(letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return 0;

}
