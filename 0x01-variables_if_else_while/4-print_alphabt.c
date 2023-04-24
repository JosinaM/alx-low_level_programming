#include <stdio.h>
/**
 * main - Entry
 * Descriptions: lists lowercase alphabets except q and e
 * Return: always 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
	{
		putchar(alpha);
	}
		alpha++;
	}
	putchar(\n);
	return	(0);
}
