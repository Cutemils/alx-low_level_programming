#include "main.h
#include <unistd.h>

/**
 * _putchar - write the putchar program
 * Return: On success 1
 * On error, - 1 is returned, and error is set appropriately
 */

int_putchar(char c)
{
	return(write(1, &c, 1));
}
