#ifndef DOG
#define DOG
/**
 * struct dog - Define a new type struct dog with the following elements
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: Longer description
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
