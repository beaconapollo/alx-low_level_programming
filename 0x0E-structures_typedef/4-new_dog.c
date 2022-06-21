#include "dog.h"
/**
 * new_dog - creats a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int ln = 0, lo = 0, i;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	while (*(name + ln))
		ln++;
	d->name = malloc(sizeof(char) * (ln + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; *(name + i); i++)
		d->name[i] = name[i];

	d->age = age;

	while (*(owner + lo))
		lo++;
	d->owner = malloc(sizeof(char) * (lo + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; *(owner + i); i++)
		d->owner[i] = owner[i];

	return (d);
}
