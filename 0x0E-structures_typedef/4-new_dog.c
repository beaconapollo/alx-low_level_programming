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
	int i = 0, j = 0;

	dog1 = malloc(sizeof(dog_t));
	while (*(name + i))
	{
		dog1->name[i] = *(name + i);
		i++;
	}
	dog1->age = age;
	while (*(owner + j))
	{
		dog1->owner[j] = *(owner + j);
		j++;
	}
	return (dog1);
}
