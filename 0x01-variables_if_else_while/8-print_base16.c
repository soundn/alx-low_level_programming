/*
 * File: 8-print_base16.c
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
	char no;
	int la;

	for (la = 0; la < 10; la++)
		putchar((la % 10) + '0');

	for (no = 'a'; no <= 'f'; no++)
		putchar(no);

	putchar('\n');
	return (0);
}
