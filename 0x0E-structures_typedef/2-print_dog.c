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
	/* check if d has some element*/
	if (d == NULL)
		printf("nil\n");

	/* check if *d is NULL*/
	if (d == NULL)
		printf(" ");

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
