#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("%d and is greater than five\n", n);
	} else if (n == 0)
	{
		printf("%d and is zero\n", n);
	} else
	{
		printf("%d is less than six and not zero\n", n);
	}
	return (0);
}
