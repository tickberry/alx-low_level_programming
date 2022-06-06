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

	printf("Capital uppercase:\n");
	for (i = 'A'; i <= 'Z'; i++)
		printf("%c ", i);
	printf("Lower lowercase:\n");
	for (i = 'a'; i <= 'z'; i++)
		printf("%c ", i);
	return (0);
}
