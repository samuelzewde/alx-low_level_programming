#include "main.h"

/**
* _memset - fills the first n bytes of the memory
* @s: pointer
* @b: data
* @n: index
* Return: char
*/

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
