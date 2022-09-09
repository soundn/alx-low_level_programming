/*
 * File: 6-print_numberz.c
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

	for (no = 0; no < 10; ++no)
		putchar((no % 10) + '0');

	putchar('\n');
	return (0);
}
