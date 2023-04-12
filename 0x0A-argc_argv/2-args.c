#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints all arguments it receives
  * @argc: arguments count
  * @argv: arguments strings
  * Return: always 0 (sucess)
  */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
