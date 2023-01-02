#include "main.h"
/**
 * _memset - fills memory with a constant bytes.
 * @s: source string
 * @b: the contant byte for filling
 * Qn: length of buffer
 * Return: new string.
 */
char *-memset(char *s, char b, unsigned int. n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
