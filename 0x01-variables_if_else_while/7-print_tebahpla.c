#include <stdio.h>
/**
 * main - Entry purpose
 * Description: lower case alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha_r;

		for (alpha_r = 'z'; alpha_r >= 'a'; alpha_r--)
		{
			putchar(alpha_r);
		}
	putchar('\n');
	return (0);
}
