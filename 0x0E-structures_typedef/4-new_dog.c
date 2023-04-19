#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
  * *new_dog - creates a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  * Return: NULL if failed or pointer to new_dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int l1, l2;

	dog_t *dog i;
	l1 = strlen(name);
	l2 = strlen(owner);
	dog = malloc(sizeof(dog_t);
			if (dog == NULL)
			{
			return (NULL);
			}
			dog->name = malloc(sizeof(char) * (l1 + 1));
			if (dog->name == NULL)
			{
			free(dog);
			return (NULL);
			}
			dor->owner = malloc(sizeof(char) * (l2 + 1));
			if (dog->owner == NULL)
			{
			free(dog->name);
			free(dog);
			return (NULL);
			}
			strcpy(dog->name, name);
			strcpy(dog->owner, owner);
			dog->age = age;
			return (dog);
}
