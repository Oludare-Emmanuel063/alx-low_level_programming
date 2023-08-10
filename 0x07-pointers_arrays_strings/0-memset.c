#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte 
 * @n: the number of byte of memory area to fill
 * Description: fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `b`.
 * Return: Pointer to memory area `s`
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int number;

	for (number = 0; number < n; number++)
	{
		s[number] = b;
	}

	return (s);
}
