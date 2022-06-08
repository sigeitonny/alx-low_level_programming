#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: number to be printed
 *
 * Return: 1 if greater, 0 if equal and -1 if less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{

		_putchar('+');
		return ('1');
	}
	else if (n == 0)
	{
		_putchar('0');
		return ('0');
	}

		else
		{
		_putchar('-');
		return ('0');
		}
}
