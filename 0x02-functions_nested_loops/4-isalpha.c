#include "main.h"

/**
 * isalpha - checks for alphabets
 * @c: character to be checked
 *
 * Return: 1 if char is aletter or lowwer, 0 when othrwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
