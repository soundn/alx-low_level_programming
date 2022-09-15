#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * * print_number - a function that multiplies two integers
 * * @a: first input
 * * @b: second input
 * * Return: multiplication result of the 2 inputs
 */
void print_numbers(void)
{
	int a;

	for (a=0; a <= 9; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');
}
