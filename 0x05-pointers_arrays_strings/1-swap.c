#include "main.h"

/**
  * swap_int - swapping
  *
  * @a: int
  * @b: int
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
