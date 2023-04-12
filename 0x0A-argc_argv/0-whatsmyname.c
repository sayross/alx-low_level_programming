#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints its name, followed by a new line
  * @argv: arguments strings
  * Return: always 0 (success)
  */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc -1]);
	return (0);
}
