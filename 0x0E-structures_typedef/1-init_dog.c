#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: struct dog
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: the name of the owner.
 *
 * Return: no return.
 */
void init_dog(struct dog *dog_o, char *name, float age, char *owner)
{
	if (dog_o)
	{
		dog_o->name = name;
		dog_o->age = age;
		dog_o->owner = owner;
	}
}
