#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: string
 * @src: string
 * @n: number of bytes
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int l;

	for (l = 0; dest[l] != '\0'; l++)
	{
	}
	for (k = 0; src[k] != '\0' && k < n; k++)
	{
		dest[k + l] = src[k];
	}
	return (dest);
}
