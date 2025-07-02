#include "main.h"
/**
 * is_prime_recursive_check - Helper function to check for primality
 * recursively.
 * @n: The number to check for primality.
 * @divisor: The current number being tested as a potential divisor of n.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_recursive_check(int n, int divisor)
{

	if (n % divisor == 0)
	{
		return (0);
	}

	if (divisor * divisor > n)
	{
		return (1);
	}

	return (is_prime_recursive_check(n, divisor + 1));
}


/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}


	if (n == 2)
	{
		return (1);
	}


	return (is_prime_recursive_check(n, 2));
}
