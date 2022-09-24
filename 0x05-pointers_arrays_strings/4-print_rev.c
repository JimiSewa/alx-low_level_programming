#include "main.h"
/**
 * print_rev - prints a string of input in reverse
 * Description - same as above
 * @s: string input to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		putchar(*s);
		count--;
	}
	putchar(10);
}
