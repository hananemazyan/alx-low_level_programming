#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
 /*ctype.h provides functions for testing and manioulation character */

/**
  * main - add positive numbers
  * @argc : number of arguments
  * @argv : array of arguments
  * Return: 0 ( Success), 1 (Error)
  */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		while (*arg != '\0')
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
