#include "main.h"
/**
 * _memcpy - memory area is copied by this function.
 * @n: this is the variable to copy
 * @src: to copy from this variable 
 * @dest: to copy into this variable 
 * Return: `dest`
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int number;

	for (number = 0; number < n; number++)
	{
		dest[number] = src[number];
	}

	return (dest);
}
