#include <stdio.h>
/**
 * main - Calculates sizes of data types
 * Return: 0(Success)
 */

int main(void)
{

        char c;
        int i;
        long int l;
        long long int d;
        float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of an long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
