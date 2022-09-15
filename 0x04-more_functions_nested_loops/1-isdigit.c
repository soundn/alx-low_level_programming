#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - function checks for 0 to 9.
 * _isupper - checks if the letters are uppercase
 * *  @c: input.
 * *
 * *  Return: 1 if c is uppercase
 * 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
