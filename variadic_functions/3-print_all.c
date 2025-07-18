#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Affiche n'importe quel type d'arguments basé sur une chaîne de format.
 * @format: Une chaîne de caractères contenant les types d'arguments à afficher.
 * 'c' pour char, 'i' pour int, 'f' pour float, 's' pour char *.
 * @...: Les arguments variables à afficher.
 *
 * Return: Rien (void).
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *separator = "";

	va_start(args, format);

	if (format == NULL)
	{
		printf("\n");
		va_end(args);
		return;
	}

	while (format[i] != '\0')
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
				if (str == NULL)
				{
					printf("%s(nil)", separator);
					break;
				}
				printf("%s%s", separator, str);
				break;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
