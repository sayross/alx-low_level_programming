#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

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
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
