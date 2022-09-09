/*
 * File: 7-print_tebahpla.c
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

	for (no = 'z'; no >= 'a'; no--)
		putchar(no);

	putchar('\n');
	return (0);
}
