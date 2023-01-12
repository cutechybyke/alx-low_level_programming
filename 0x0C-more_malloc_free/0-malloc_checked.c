#include <stdlib.h>

/**
 * malloc_checked - allows
 * @b: size of memory to be alocated
 * Return: pointer to allowed memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
