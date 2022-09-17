#include "main.h"

/**
 *_isupper - checks if input is lower or not
 *Description - same as above
 *@c: input to be checked
 *Return: 1 whether it is, 0 otherwise
 */

int _isupper(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return(0);

}
