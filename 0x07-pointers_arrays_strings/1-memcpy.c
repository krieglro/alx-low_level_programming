#include "main.h"

/**
 * _memcpy - memory copier
 * @dest: this is the destination mempry
 * @src: this is the source memory
 * @n: number of bytes to be copied
 * Return: the string copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
