#include "main.h"
#include <string.h>
/**
  * is_palindrome - checks if the srting is a palindrome
  * @s: string
  *
  * Return: 1 if it's a palindrome, Otherwise 0
  */


int is_palindrome(char *s)
{
	int i, j, len;

	if (!s)
		return (0);
	len = strlen(s);
	if (len <= 1)
		return (1);
	return (*s == s[len - 1] && is_palindrome(s + 1, len - 2);
}
