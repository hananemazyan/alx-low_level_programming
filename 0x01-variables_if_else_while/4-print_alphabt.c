#include <stdio.h>
/**
  *main - prints alphabet lowcase
  *Return: 0 always success
  */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar (ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
