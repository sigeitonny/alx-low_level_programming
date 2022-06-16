#include "main.h"

/**
 * _strncpy - copy string
 * @dest: string to copy
 * @src: source to copy from
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && src[y]; y++)
	{
		dest[y] = src[y];
	}
	for (; y < n; y++)
	{
		dest[y] = '\0';
	}
	return (dest);
}
