#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
char lettre = 'a';
while (lettre <= 'z')
{
putchar(lettre);
lettre++;
}

putchar('\n');

return (0);
}
