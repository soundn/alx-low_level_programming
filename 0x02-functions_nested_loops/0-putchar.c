#include "main.h"
#include <stdio.h>
/**
* main - check the code
* Auth: Kenneth Nwankwo
* File: 0-putchar.c
* Return: Always 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
