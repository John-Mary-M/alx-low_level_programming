#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: address of my_dog
 * @name: first member of struct
 * @age: age of my_dog
 * @owner: ownwer of my_dog
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* used memberof method and dereferenced the pointer*/
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
