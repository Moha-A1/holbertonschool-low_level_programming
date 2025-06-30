#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string whose length is to be calculated.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{

int len;
len = 0;

/*
 * ou while ( s[len] != '\0' )
 */
while (*s != '\0')
{
	s++;
	len++;
}
return (len);
}
