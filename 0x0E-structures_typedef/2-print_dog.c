#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints struct dog
 * @d: pointer to my_dog of type struct dog
 * Return: Void.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		/* check if d.name has some element*/
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		/* check if d.owner is NULL*/
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}

	/*printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);*/
}
