#include <stdio.h>
/**
 * main - Entry. base16 which is 0123456789abcdef
 * Return: results
 */
int main(void)
{
	int num = 0;

	while (num <= 15)
	{
		printf("%x", num);
			num++;
	}
	printf("\n");

	return (0);
}
