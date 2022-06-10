#include "main.h"

/**
 * print_diagonal - draws a diagonal line.
 * @n: number of times charcter \ should be printed
 */
void print_diagonal(int n)
{
	int i;
	int p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (p = 1; p < i; p++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
