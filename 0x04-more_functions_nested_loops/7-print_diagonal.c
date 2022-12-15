#include "main.h"

/**
* print_diagonal -> printing line
* @n: integer params
*/
void print_diagonal(int n)
{
	int x, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (y = 0; y < n; y++)
		{
			for (j = 0; j < y; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
