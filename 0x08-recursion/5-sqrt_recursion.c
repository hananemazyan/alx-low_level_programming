#include "main.h"

/**
  * _sqrt_helper - recurse to find the natural square root ofa number
  * @n: number to calculate the square root
  * @i: The possible value of square root
  * Return: -1 if n does not have a natural square root, otherwise , the natural square root of n
  */
int _sqrt_helper(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(i + 1, n));
}


/**
 *_sqrt_recursion -  returns the natural square root of a number
 * @n: number 
 * Return: naturel square of a number.
 */

int _sqrt_recursion(int n)
{
	if(n < 0)
		return (-1);
	return (_sqrt_helper(0,n));
}
