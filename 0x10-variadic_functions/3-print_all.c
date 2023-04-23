#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, num_args = 0, i_arg;
	char c_arg, *s_arg;
	float f_arg;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				num_args++;
				c_arg = va_arg(args, int);
				printf("%c", c_arg);
				break;
			case 'i':
				num_args++;
				i_arg = va_arg(args, int);
				printf("%d", i_arg);
				break;
			case 'f':
				num_args++;
				f_arg = (float)va_arg(args, double);
				printf("%f", f_arg);
				break;
			case 's':
				num_args++;
				s_arg = va_arg(args, char *);
				if (s_arg)
					printf("%s", s_arg);
			default:
				break;
		}
		if (format[i + 1] != '\0' && num_args > 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
