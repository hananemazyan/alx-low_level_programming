#include "main.h"

/**
  * factoriel - return the factoriel of a given number
  * @n: number
  * Return: factoriel of numbers
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
