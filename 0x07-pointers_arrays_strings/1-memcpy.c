#include "main.h"
/**
 * _memcpy - Copies @n bytes from the memory area
 * @dest: A pointer to the memory area to copy @src into
 * @src: The source buffer to copy characters from
 * @n: The number of bytes to copy from @src
 * Return: pointer to memory of filled
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
