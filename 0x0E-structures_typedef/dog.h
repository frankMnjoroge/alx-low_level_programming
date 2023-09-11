#ifndef DOG_H
#define DOG_H
#include <string.h>
/**
 * struct dog - Dogs information
 * @name: name of thedog
 * @owner: Owner of the dog
 * @age: age of the dog
 *
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *p, char *name, float age, char *owner);
void print_dog(struct dog *p);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *p);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
