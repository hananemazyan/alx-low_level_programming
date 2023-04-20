/*
 * upcode: operation code,instruction machine code
 * is the portion of a machine language instruction
 * specifies the operation to be performed
 */

#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
	}

	a = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx ", a[i]);
	}
	return (0);
}
