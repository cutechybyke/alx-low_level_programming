#include "main.h"

/**
 * _memcpy - a function that copis memory area
 * @dest: memrot
 * @src: jff
 * @n: number of bytes
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
