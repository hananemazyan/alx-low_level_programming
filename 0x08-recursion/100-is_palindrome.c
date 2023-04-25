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

	i = 0;
	j = len - 1;
	while (i < j)
	{
		if (s[i] != s[j])
			return (0);
		i++;
		j--;
	}
	return (1);
}
