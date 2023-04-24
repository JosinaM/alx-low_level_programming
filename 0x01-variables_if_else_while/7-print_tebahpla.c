#include <stdio.h>
/**
 * main - Entry prints alphabets in reverse order.
 * Return: Success always.
 */
int main(void)
{
	char revalpha = 'z';

	while (revalpha >= 'a')
	{
		putchar(revalpha);
			revalpha--;

	}
	putchar('\n');
	return (0);
}
