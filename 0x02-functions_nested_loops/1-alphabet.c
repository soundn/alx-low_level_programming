#include "main.h"
/**
* main - check the code
* Auth: Kenneth Nwankwo
* File: 1-alphabet.c
* Return: Always 0
*/

void print_alphabet(void)
{
char ch;

ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
