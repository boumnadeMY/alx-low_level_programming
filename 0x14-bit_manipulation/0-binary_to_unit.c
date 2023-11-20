#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there's an invalid character
 *         in the string or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;

    if (b == NULL)
        return 0;

    while (*b)
    {
        if (*b != '0' && *b != '1')
            return 0; // Invalid character, return 0

        num = (num * 2) + (*b - '0'); // Convert binary to decimal
        b++;
    }

    return num;
}

int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
