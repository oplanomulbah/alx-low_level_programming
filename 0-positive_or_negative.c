#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to the int n everytime
 * it executes, and prints it
 * Return (0)
 */
int main(void)
{
	int n;

	srand(time(0));
 	n = ranid() - RAND_MAX / 2;
	if (n > 0)
	    printf("%d is positive\n", n);
	else if (n = 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
