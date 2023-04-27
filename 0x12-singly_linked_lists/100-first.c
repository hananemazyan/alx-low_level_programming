#include <stdio.h>
/* Functions that are executed before and after main() in C :www.geeksforgeeks.org */

void first(void)__attribute__((constructor));
/**
  * first - prints a message befor the main
  */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
