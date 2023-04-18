#include "dog.h"

/**
* init_dog -inits a variable of
* type dog
* @d: dog ID
* @name: dog name
* @age: aage of dog
* @owner: owner's name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = ownerr;
	}
}
