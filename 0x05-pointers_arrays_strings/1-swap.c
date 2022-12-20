#include "main.h"

/**
* swap_int : swapping the value of a and b
* @a: int pointer
* @b: int pointer
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
