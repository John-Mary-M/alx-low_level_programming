#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the new_dog element
 * @age: age of new_dog
 * @owner: owner of new_dog
 * Return: pointer to new_dog created.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *simba;
	char *a, *b;

	/*determine length of string in name*/
	len1 = 0;
	for (i = 0; name[i] != '\0'; i++)
		len1++;

	len2 = 0;/*determine length of string in owner*/
	for (i = 0; owner[i] != '\0'; i++)
		len2++;
	simba = malloc(sizeof(dog_t));/*reserve size for simba*/
	if (simba == NULL)
		return (NULL);
	a = malloc((len1 + 1) * sizeof(char));/*reserve space fr name in simba*/
	if (a == NULL)
	{
		free(simba);
		return (NULL);
	}
	for (i = 0; i < len1; i++)/*initialize name string*/
		a[i] = name[i];
	a[i] = '\0';
	simba->name = a;
	simba->age = age;
	b = malloc((len2 + 1) * sizeof(char));/*reserve space in mem for owner*/
	if (b == NULL)
	{
		free(a);
		free(simba);
		return (NULL);
	}
	for (i = 0; i < len2; i++)/*initialize owner string*/
		b[i] = owner[i];
	b[i] = '\0';
	simba->owner = b;
	return (simba);
}
