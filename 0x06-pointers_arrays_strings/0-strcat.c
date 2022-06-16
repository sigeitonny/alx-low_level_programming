#include "main.h"

/**
 * _strcat - Concatates two strings
 * @dest: String1
 * @src: String2
 *
 * Return: Pointer to resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int y, z;

	y = 0;
	z = 0;

	while (dest[y] != '\0')
	{
		y++;
	}
	while (src[z] != '\0')
	{
		dest[y] = src[z];
		y++;
		z++;
	}
	dest[y] = '\0';

	return (dest);
}
