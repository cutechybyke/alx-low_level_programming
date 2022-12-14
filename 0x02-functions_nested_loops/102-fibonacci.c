#include <stdio.h>

/**
 * main - prints first 50
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 50)
			printf("\n");
		else
			printf(',');
			printf(' ');
	}

	return (0);
}
