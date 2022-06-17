#include "main.h"

/**
 * _strlen - Returns length of string
 * @s: String to get length of
 *
 * Return: lenght of @s
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
