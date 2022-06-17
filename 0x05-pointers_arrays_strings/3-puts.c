#include "main.h"

/**
 * _puts - print a string
 * @str: string to print
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
