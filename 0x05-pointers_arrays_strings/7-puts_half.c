#include "main.h"

/**
 * puts_half - this a function that prints half of a sring
 * if odd len, n = lrnth b y half
 * @str: this is the input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n, str[a] != '\n'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
