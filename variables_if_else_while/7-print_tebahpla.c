#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int lettre = 122;
while (lettre >= 97)
{
putchar(lettre);
lettre--;
}
putchar('\n');
return (0);
}
