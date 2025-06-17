/**
* main - Entry point
*
* Description: use sizeof
*
* Return: Always 0 (Success)
*/


#include <stdio.h>

int main(void)
{
printf("Sizeof of a float: %lu byte(s)\n", sizeof(float));
printf("Sizeof of a int: %lu byte(s)\n", sizeof(int));
printf("Sizeof of a char: %lu byte(s)\n", sizeof(char));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
return (0);
}
