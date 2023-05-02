#include "main.h"

/**
 * _strlen - length of string
 * @s: pointer to first character of string
 * return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
