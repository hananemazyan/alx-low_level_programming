#include <stdio.h>
/**
  * main - prints the alphabet in lowercase, and then in uppercase
  * Return: 0 always success
  */
int main(void)
{
	char n;
	char c;

	for (n = 'a'; n <= 'z'; ++n)
		putchar(n);
	for (c = 'A'; c <= 'Z'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
