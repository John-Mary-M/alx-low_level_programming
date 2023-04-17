#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free space occupied by dog objects
 * @d: pointer to the dog object to be freed
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)/*making sure d isnt already empty*/
	{
		/*using free() to free previously assigned space*/
		free(d->name);
		free(d->owner);
		free(d);
	}
}
