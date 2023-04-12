#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the minimum number of coins to make change
  * @argc: arguments count
  * @argv: arguments strings
  * Return: 0 success or 1 error
  */
int main(int argc, char **argv)
{
	int c, count = 0, r;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (atoi(argv[1]) >= 0)
	{
		c = atoi(argv[1]);
		r = c / 25;
		count = count + r;
		r = (c % 25) / 10;
		count = count + r;
		r = ((c % 25) % 10) / 5;
		count = count + r;
		r = (((c % 25) % 10) % 5) / 2;
		count = count + r;
		if ((c % 2) == 1)
		{
			count += 1;
		}
		printf("%d\n", count);
	}
	return (0);
}
