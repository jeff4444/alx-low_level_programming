#ifndef dog_h
#define dog_h
/**
 * struct dog - creates a dog struct with name
 * age and owner members
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
