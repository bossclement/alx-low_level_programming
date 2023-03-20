#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the dog members
 * @d: the structure
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d.name == NULL ? "(nil)" : d.name);
		printf("Age: %d\n", d.age == NULL ? "(nil)" : d.age);
		printf("Owner: %s\n", d.owner == NULL ? "(nil)" : d.owner);
	}
}
