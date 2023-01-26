#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a lists of types of arguments passed to the function.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *s, separator;

	va_start(args, format);

	separator = "";

	i = 0;
	while (t_arg[j])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
					printf("%s%s", separator, s);
					break;
			default:
					i++;
					continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
