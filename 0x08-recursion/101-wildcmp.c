#include "main.h"

/**
  * wildcmp - compare two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: 1 if the two strings are identical else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		while (*(s2 + 1) == '*')
			s2++;
		if (*(s2 + 1) == '\0' && *s1 == '\0')
			return (1);
		if (*(s2 + 1) == '\0' && *s1 != '\0')
			return (0);
		if (*(s2 + 1) != '\0' && *s1 == '\0')
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	if (*s1 == '\0' || *s2 == '\0')
		return (*s1 == *s2);
	if (*s1 == *s2 || *s2 == '?')
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
