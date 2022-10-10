#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - struct defining dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: a structure defining a dog
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
#endif
