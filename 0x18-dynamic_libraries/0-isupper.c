#include "main.h"

/**
 * _isupper - checks the code for uppercase
 * @c: input character
 * Return: if its an uppercase 0
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
