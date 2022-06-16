#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: Array of integers to be reversed
 * @n: Number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
}
