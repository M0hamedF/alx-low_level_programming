#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = _strdup(name);
if (!dog->name)
{
free(dog);
return (NULL);
}

dog->age = age;
dog->owner = _strdup(owner);
if (!dog->owner)
{
free(dog->name);
free(dog);
return (NULL);
}

return (dog);
}
