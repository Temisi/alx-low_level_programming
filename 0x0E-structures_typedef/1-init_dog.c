#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer to a dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d && name && owner)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
