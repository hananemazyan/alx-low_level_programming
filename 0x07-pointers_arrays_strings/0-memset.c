#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @n: bytes
  * @s: memory area
  * @b: constant byte
  * Return: a pointer to the memory area
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
