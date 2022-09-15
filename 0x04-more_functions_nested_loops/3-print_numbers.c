#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * * print_numbers - a function that multiplies two integers
 * * Return: void
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');
}
