#include "main.h"

/**
* print_diagonal - print diagonal line
* @n: integer
*/
void print_diagonal(int n)
{
	int x, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
