#include <stdio.h>
/**
 * main - Entry
 * prints all base 10 numbers
 * Return: always 0
 */
int main(void)
{ int num = 0;

	while (num < 10)
	{
	putchar(num + '0');
	num++;
	}
	putchar('\n');
	return  (0);
}
