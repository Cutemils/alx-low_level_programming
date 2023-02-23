#include "main.h"

/**
 * main - positive or negative
 * Return: Always 0
 */
int main(void)
{
       int i;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else
        {
        printf("%d is negative\n", i);
}
        return (0);
}
