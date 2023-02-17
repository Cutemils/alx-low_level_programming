#include <stdio.h>

/**
 * main - program that prints lower case alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char mj;

	for (mj = 'z'; mj >= 'a'; mj--)
		putchar(mj);

	putchar('\n');

	return (0);
}

