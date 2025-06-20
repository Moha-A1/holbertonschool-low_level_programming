#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int lettre = 97;
while (lettre <= 122)
{
if  (lettre != 113 && lettre != 101)
{
putchar (lettre);
}
lettre++;
}
putchar('\n');
return (0);
}
