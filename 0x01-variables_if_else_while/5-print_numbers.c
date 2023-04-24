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
		printf("%d", num);
		num++;
	}
	printf('\n');
	return	(0);
}
