#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the dog structure.
 * @dog_o: struct dog.
 * Return: no return.
 */
void print_dog(struct dog *dog_o)
{
	if (dog_o)
	{
		if (!(dog_o->name))
			printf("Name: (nil)\n");
		else
			print("Name: %s\n", dog_o->name);

		printf("Age: %f\n", dog_o->age);

		if (!(dog_o->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", dog_o->owner);
	}
}
