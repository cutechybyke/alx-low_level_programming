/*
 * File: 101-natural.c
 * auth: vincent kipp
 */

#include <stdio.h>

/**
 * main - Lists all natural...
 * Return: Always 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += 1;
	}

	printf("%d\n", sum);

	return (0);
}
