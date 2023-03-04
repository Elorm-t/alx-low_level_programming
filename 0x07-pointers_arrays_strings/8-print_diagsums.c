#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of square matrix diagonals
 * @a: pointer to matrix
 * @size: size of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, diag_left = 0, diag_right = 0;

	for (i = 0; i < size; i++)
	{
		diag_left += a[(size * i) + i];
		diag_right += a[((size - 1) * i) + (size - 1)];
	}
	printf("%d, %d\n", diag_left, diag_right);
}
