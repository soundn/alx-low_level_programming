#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (n == 0)
		printf("Last digit of %d is %d and is zero\n", n, m);
	if (n < 6)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
