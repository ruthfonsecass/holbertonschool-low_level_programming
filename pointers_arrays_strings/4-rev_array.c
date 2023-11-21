#include "main.h"

/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int l = n -1;

	while (i < l)
	{
		int temp = a[i];
		a[i] = a[l];
		a[l] = temp;
	}
	i++;
	l--;
}
