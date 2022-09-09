/*
 * File: 9-printcomb.c
 * Auth: kenneth nwankwo
 *
 */

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
	int no;

	for (no = '0'; no <= 9; no++)
	{
		putchar((no % 10) + '0');
		if (no == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
