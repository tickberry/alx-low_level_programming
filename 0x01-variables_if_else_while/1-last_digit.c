#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - conditions up for checks
 *
 * Decription: the result for condition will return
 *
 * Return: the interger value will return 0
 *
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* declaring a variable */
	last_digit = n % 10;
	/* your code goes there */
	/* giving input */
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	} else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
