#include "main.h"
/**
 * _islower - checks and returns 1 if input is lowercase
 * @c: input being checked
 * Description: same as above
 * Return: int 1 or 0
 */

int _islower(int c)
{
	if (c > 97 && c < 123)
		return (1);
	else
		return (0);
}
