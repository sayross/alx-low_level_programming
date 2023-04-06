#include "main.h"

int test(int n, int i);

/**
 * is_prime_number - test prime number
 * @n: number
 * Return: 1 if true 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (test(n, n - 1));
}

/**
  * test - test prime number
  * @n: number
  * @i: test
  * Return: 1 if true 0 if false
  */

int test(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	test(n, i - 1);
}
