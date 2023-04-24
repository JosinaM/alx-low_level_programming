#include <stdio.h>

/**
 * main - a program that prints lower case letters of the alphabet
 * Return: 0 (Sucess always)
 */
int main(void)
{
	char alpha = 'a';
	char bet = 'A';

		do	{
			putchar(alpha);
			alpha++;
		}	while (bet <= 'z');
		do	{
			putchar(bet);
			bet++;
		}	while (bet <= 'Z');

	putchar('\n');
Return(0);
}
