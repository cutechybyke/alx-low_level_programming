#include "main.h"
#include <stdio.h>

/**
 * main - Fizz for numbers from 1 to 100, folowed by a new line
 * but for multiples of 3 points Buzz
 * and also multiples of 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
	if ((n % 3) == 0 && (n % 5) == 0)
	{
	printf("FizBuzz");
	}
	else if ((n % 3) == 0)
	{
	printf("Fizz");
	}
	else if ((n % 5) == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", n);
	}
	if (n == 100)
	{
	continue;
	}
	printf(" ");
	}
	printf("\n");

	return (0);
}
