#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 *@d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name ? printf("%s\n", d->name) : printf("(nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner ? printf("%s\n", d->owner) : printf("(nil)\n");
	}
}
