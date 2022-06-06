#include<stdio.h>
/**
 * main - the main block
 *
 * Description: print thae alphabet in lowcase & uppercase
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		printf("%c ", i);
	for (i = 'A'; i <= 'Z'; i++)
		printf("%c ", i);
	return (0);
}
