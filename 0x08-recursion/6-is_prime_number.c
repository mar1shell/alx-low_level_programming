#include <stdio.h>

/**
 * isprime - checks if n is prime
 * @n: int
 * @i: int
 * Return: 1 if prime; else 0
 */

int isprime(int n, int a)
{
	if (n % a == 0)
		return (0);
	if (a * a <= n)
	{
		return (isprime(n, a + 1));
	}
	return (1);
}

/**
 * is_prime_number - checks if n is prime
 * @n: int
 * Return: 1 if prime; else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isprime(n, 2));
}
