#include <stdlib.h>
#include "main.h"


/**
  * *malloc_checked - allocate memo unsing malloc
  * @b: number od byteq
  *
  * Return: pointer to allocated memo
  */


void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
