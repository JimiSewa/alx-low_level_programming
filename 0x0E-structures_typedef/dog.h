fndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * struct dog - struct for dog
 * @name: Dog name
 * @age: Dog age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
