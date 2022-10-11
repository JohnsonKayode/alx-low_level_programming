#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a structure dog
 * @d: pointer to structure dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %0.1lf\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %d\n", d->owner);
	}
}
