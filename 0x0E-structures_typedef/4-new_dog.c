#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - is a function that creates a new dog
 * @name: is a pointer to name
 * @age: is a pointer to age
 * @owner: is a pointer to owner
 * Return: pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	int j = 0;
	int m;
	dog_t *dog1;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
	{
		free(dog1);
		return (NULL);
	}
	dog1->name = malloc(i * sizeof(dog1->name));
	if (dog1->name == NULL)
	{
		free(dog1->name);
		return (NULL);
	}
	for (m = 0; m <= i; m++)
		dog1->name[m] = name[m];
	dog1->age = age;
	dog1->owner = malloc(j * sizeof(dog1->owner));
	if (dog1->owner == NULL)
	{
		free(dog1->owner);
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	for (m = 0; m <= j; m++)
		dog1->owner[m] = owner[m];
	return (dog1);
}
