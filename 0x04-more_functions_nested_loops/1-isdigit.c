#include "main.h"

/**
 * _isdigit - chevk if nos are 0 -9
 * @c: char to check
 * Return: 0 or 9
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
