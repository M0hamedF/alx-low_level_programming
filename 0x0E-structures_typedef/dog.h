#ifndef DOG_H_FILE
#define DOG_H_FILE

/**
 * struct dog - dog struct
 * @name: dog`s niame
 * @age: dog`s age
 * @owner: dog`s owner
 * Description: just a lone struct dog in a big kitty world
 * Return: 0
*/

struct dog
{
	char *name;
	float *age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
