#include <stdio.h>
/**
  * main - prints the alphabet in lowercase
  * Return: 0 always success
  */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; ++n)
		putchar(n);
	putchar('\n');
	return (0);
}
