#include <stdio.h>
/**
 * main - A program that writes various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char m;
	int n;
	long int o;
	long long int p;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(n));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(0));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(p));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
