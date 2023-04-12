#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - adds positive numbers
  * @argc: arguments count
  * @argv: arguments strings
  * Return: 0 if success, 1 if not
  */

int main(int argc, char **argv)
{
	int i;
	int sum = 0;
	char *p;
	int n;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			n = strtol(argv[i], &p, 10);
			if (*p != '\0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += n;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
