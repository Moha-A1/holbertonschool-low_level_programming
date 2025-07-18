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
	char *sep_char = "";

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep_char, va_arg(args, int));
				sep_char = ", ";
				break;
			case 'i':
				printf("%s%d", sep_char, va_arg(args, int));
				sep_char = ", ";
				break;
			case 'f':
				printf("%s%f", sep_char, va_arg(args, double));
				sep_char = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("%s(nil)", sep_char);
					sep_char = ", ";
					break;
				}
				printf("%s%s", sep_char, str);
				sep_char = ", ";
				break;
			default:
				i++;
				continue;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
