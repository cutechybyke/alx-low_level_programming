#include "main.h"

/**
 * print_last_digits - prints last no
 * @n: the no
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int ld = n % 15;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
