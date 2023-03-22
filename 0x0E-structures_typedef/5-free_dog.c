#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - is a function that frees memory of dog
 * @d: is a pointer to a dog of type dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
