#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initialize a variable of type struct dog
  * @d: variable of type struct dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  * Return: void always
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	owner = owner;
}
