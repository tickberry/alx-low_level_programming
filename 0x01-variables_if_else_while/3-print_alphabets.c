#include <stdio.h>
/**
 * main - the main block
 *
 * Description: print thae alphabet in lowcase & upper case
 *
 * Return: 0
 */
int main(void)
{
	char i;

	printf("Capital uppercase:\n");
	for (i = 'A'; i <= 'Z'; i++)
		putchar("%d", i);
	printf("Lower lowercase:\n");
	for (i = 'a'; i <= 'z'; i++)
		putchar("%d", i);
	return (0);
}
