#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* new_dog - initialize a variable of type struct dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner's name
* Return: Nothing
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int strc;
	char *ptr;

	if (name == 0 || owner == 0)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (strc = 1, ptr = name; *ptr; strc++)
		ptr++;
	d->name = malloc(strc);
	if (d->name == 0)
	{
		free(d);
		return (NULL);
	}

	for (strc = 1, ptr = owner; *ptr; strc++)
		ptr++;
	d->owner = malloc(strc);
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (strc = 0; *name != 0; strc++, name++)
		d->name[strc] = *name;
	d->name[strc] = '\0';
	for (strc = 0; *owner != 0; strc++)
		d->owner[strc] = *owner++;
	d->owner[strc] = 0;
	d->age = age;

	return (d);
}
