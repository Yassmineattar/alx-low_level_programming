#include "dog.h"
/**
 * free_dog - function that frees dogs
 *@d:input of the function
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
