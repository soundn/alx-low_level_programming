#include "main.h"
#include <stdio.h>

/**
 * swap_int - function checks for upper case.
 * _isupper - checks if the letters are uppercase
 * *  @a: input.
 * *  @b: input.
 * *
 * *  Return: 1 if c is uppercase
 * 0 otherwise
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
