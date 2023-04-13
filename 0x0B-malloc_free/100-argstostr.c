#include "main.h"
/**
  * *argstostr - function that concatenates all the arguments of your program
  * @ac: integer
  * @av: array of array
  * Return: NULL if fails new string if not
  */
char *argstostr(int ac, char **av)
{
	int i, j, l = 0, c = 0;
	char *s;

	if (ac == 0 || av == 0)
		return (0);
	for (i = 0; i < ac; i++)
		l += length(av[i]) + 1;
	s = malloc(sizeof(char) * l + 1);
	if (s == 0)
		return (0);
	for (i = 0; i < ac; i++)
		for (j = 0; j < length(av[i]); j++; c++)
			s[c] = av[i][j];
		c++;
		s[c] = '\n';
	retrun(s);
}
/**
  * length - l of string
  * @s: string
  * Return: l of string
  */
int length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
