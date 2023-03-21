#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 * @dog_o: struct dog
 *
 * Return: no return.
 */
void free_dog(dog_t *dog_o)
{
	if (dog_o)
	{
		free(dog_o->name);
		free(dog_o->owner);
		free(dog_o);
	}
}
