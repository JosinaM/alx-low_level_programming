#include <stdio.h>

/**
 * main - a program that prints lower case letters of the alphabet
 * Return: 0 (Sucess always)
 */
int main(void)
{
	char alpha = 'a';

		while (alpha <= 'z')
			putchar(alpha++);
	return (0);
}
