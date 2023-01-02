#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to srtdout
 * @c: the character toprint
 *
 * Return: On success 1.
 * On error, -1 is to be returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
