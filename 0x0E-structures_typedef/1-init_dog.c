#include<stdlib.h>
#include "dog.h"

/**
  * init_dog - initializes a variable of type struct dog
  * @name: name to initialize
  * @age: age to initialize
  * @owner: owner to initialize
  * @d: pointer to the struct dog that have been initialize
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
