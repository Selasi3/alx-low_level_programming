#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int mod = n % 10;
	if (mod > 5) {
		printf("Last digit of %d is %d and is greater than 5\n", n,mod);
	}
	else if (mod == 0 ){
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (mod < 6 && mod != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
	}

	return (0);
}
