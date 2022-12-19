#include "main.h"
/**
 * _puts - prints a string, then followed by a new line, to the stdout
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
