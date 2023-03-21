#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - struct that stores information of the dog obj.
 * @name: name of the dog.
 * @age: age in the dog.
 * @owner: owner of the dog
 *
 * Description: struct called "dog" that stores its name,
 * its age and its owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *dog_o, char *name, float age, char *owner);
void print_dog(struct dog dog_o);


#endif
