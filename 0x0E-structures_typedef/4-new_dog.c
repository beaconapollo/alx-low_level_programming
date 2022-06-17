#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of a new dog
 * @age: age of a new dog
 * @owner: owner of a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	int i = 0;
	int nlen = 0, olen = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);
	while (*(name + nlen))
		nlen++;
	nlen += 1;
	dog1->name = malloc(nlen * sizeof(char));
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
		dog1->name[i] = name[i];
	dog1->age = age;
	while (*(owner + olen))
		olen++;
	olen += 1;
	dog1->owner = malloc(olen * sizeof(char));
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	for (i = 0; i < olen; i++)
		dog1->owner[i] = owner[i];
	return (dog1);
}
