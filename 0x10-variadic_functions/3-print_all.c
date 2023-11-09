#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints any datatype
 * @format: the datatype to be printed
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	int indx, findic;
	char *str;
	va_list myapx;

	indx = 0;

	va_start(myapx, format);
	while (format != NULL && format[indx] != '\0')
	{
		switch (format[indx])
		{
			case 'i':
				printf("%i", va_arg(myapx, int));
				findic = 0;
				break;
			case 's':
				str = va_arg(myapx, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				findic = 0;
				break;
			case 'c':
				printf("%c", va_arg(myapx, int));
				findic = 0;
				break;
			case 'f':
				printf("%f", va_arg(myapx, double));
				findic = 0;
				break;
			default:
				findic = 1;
				break;
		}
		if (findic == 0 && format[indx + 1] != '\0')
			printf(", ");
		indx++;
	}
	printf("\n");
	va_end(myapx);
}
