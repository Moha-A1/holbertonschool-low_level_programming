#include <stdlib.h>
/*
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL or if
 * insufficient memory was available.
 */
/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL or if
 * insufficient memory was available.
 */
char *_strdup(char *str)
{  char *str_bis;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	str_bis = malloc((len + 1));
	if (str_bis == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		str_bis[i] = str[i];
	str_bis[len] = '\0';
	return (str_bis);
}
