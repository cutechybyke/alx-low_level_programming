#include <unistd.h>

/**
 * _putchar - writrs the character
 * @c: the character tp print
 *
 * Return: on Success 1
 * On error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
