#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - check the code
 * @d: pointeur
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name ? d->name  : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
