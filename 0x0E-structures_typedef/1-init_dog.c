#include "dog.h"
/**
 *init_dog - initialize a variable of type struct dog
 *@d:input of the function
 *@name: name of the dog
 *@age:dog's age
 *@owner:his owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
