#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an input of elements
 * @a: Array of integers
 * @n: No of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
