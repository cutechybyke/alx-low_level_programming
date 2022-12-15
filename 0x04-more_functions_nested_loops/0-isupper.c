#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks the code for uppercase
 * @c: uppercase return 1, if lowercase return 0
 * Return if its an uppercase 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


