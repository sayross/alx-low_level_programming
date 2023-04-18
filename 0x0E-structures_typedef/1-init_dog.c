#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  * init_dog - initialize a variable of type struct dog
  * @d: variable of type struct dog
  * @name: name
  * @age: age
  * @owner: owner
  * Return: void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
