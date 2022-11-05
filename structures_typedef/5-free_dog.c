#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - function that frees a dog
 * @d: a dog to be freed
 *
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
	return;
}
