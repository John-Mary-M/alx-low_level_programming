#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - brief description
 * @name: first member
 * @age: second member
 * @owner: thrid member
 * populates variables of struct dog type.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* dog_h */
