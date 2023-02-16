#include <stdio.h>
/**
 * main - A program that writes various computer types
 * Return: Always 0 (Success)
 */
int main(void)
{
	char m;
	int n;
	long int o;
	long long int p;
	float q;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(n));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(0));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(p));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(q));
return (0);
}
