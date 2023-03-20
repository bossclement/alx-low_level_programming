#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the allocated space.
 * @d: structure of the dog.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
