#include <stdio.h>
#include <ctype.h>
/**
 * main - codes all of them
 * Description: program prints aplhabets in lowercase followed by line
 *
 * Return: 0
 *
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
