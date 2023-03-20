#include <stdio.h>
/**
 * main - Entry point
 * Description: alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e')
		{
			alpha++;
			continue;
		}
		else if (alpha == 'q')
		{
			alpha++;
			continue;
		}
		else
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}

