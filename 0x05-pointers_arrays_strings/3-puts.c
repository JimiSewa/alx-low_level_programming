#include "main.h"
/**
 *  _puts - prints a string of input
 *  Description - same as above
 *  @str: string input to be printed
 *  Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	_putchar(10);
}
