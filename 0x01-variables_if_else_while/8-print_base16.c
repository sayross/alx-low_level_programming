#include <stdio.h>
/**
 * main - Entry point
 * description: hexadecimal
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int alpha;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
