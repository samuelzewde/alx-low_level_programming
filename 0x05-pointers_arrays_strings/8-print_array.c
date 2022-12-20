#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints elements of an array
  * @a: Array
  * @n: size
  *
  * Return: void
  */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
