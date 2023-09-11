#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struct dog
 * @d: pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("name: %s\nage: %f\nowner: %s\n", d->name, d->age, d->owner);
}
