#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: arguments count
  * @argv: arguments strings
  * Return: 0 success or 1 if error
  */

int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
