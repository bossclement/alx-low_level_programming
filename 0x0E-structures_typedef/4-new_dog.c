#include "dog.h"
#include <stdlib.h>

char *strcp(char *dest, char *src);
int _strlen(char *str);

/**
 * _strlen - gets string length
 * @str: string
 * Return: number
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * strcp - copies a string
 * @dest: destination
 * @src: source
 * Return: pointer to a string
 */

char *strcp(char *dest, char *src)
{
	int str_len = _strlen(src), i = 0;

	for ( ; i < str_len; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - initializer to my structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * _strlen(name));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * _strlen(owner));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = strcp(d->name, name);
	d->age = age;
	d->owner = strcp(d->owner, owner);

	return (d);
}
