#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function to return the length of a string
 * @s: a string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i = i + 1;
		s = s + 1;
	}
	return (i);
}

/**
 * new_dog -
 * @name: 
 * @age:
 * @owner:
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t doggo;
	int i;
	
	doggo = malloc(sizeof(doggo));
	if (d1 == NULL)
	{
		return (NULL);
	}

	doggo->name = malloc(_strlen(name) * sizeof(doggo->name));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->owner = malloc(_strlen(owner) * sizeof(doggo->owner));
	if (doggo->owner == NULL)
	{
		free(doggo);
		return (NULL);
	}

	while (i <= _strlen(name))
	{
		doggo->name[i] = name[i];
		i = i + 1;
	}
	i = 0;
	while (i <= _strlen(owner))
	{
		doggo->owner[i] = owner[i];
	}

	doggo->age = age;

	return (doggo);
}
