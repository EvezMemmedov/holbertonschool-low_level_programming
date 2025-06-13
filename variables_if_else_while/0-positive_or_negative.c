#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns a random number to n and prints
 * whether it's positive, zero, or negative.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    srand(time(0)); /* initialize random seed */
    n = rand() - RAND_MAX / 2; /* so n can be positive, zero, or negative */

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }

return (0);
}
