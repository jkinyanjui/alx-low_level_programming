#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints the last digit of random number
 *
 * Return:Return 0
 */

int main(void)

{
	int n;
	int last;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last > 5)
	{
		printf("Last digit %d and is greater than 5 \n");
	}
	else if (last == 0)
	{
		printf("Last digit %d and is 0\n");
	}
	else
		printf("Last digit %d and is less that 6 and not 0 \n");
	return (0);

}
