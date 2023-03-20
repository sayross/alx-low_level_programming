#include <stdio.h>
/**
 * main - Entry point
 * Description: all combination of single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			break;
		}
		else
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
