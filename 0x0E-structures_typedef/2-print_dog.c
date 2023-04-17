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
	if (d == NULL)
		return; /*nothing to print*/

	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);

	/*printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);*/
}
