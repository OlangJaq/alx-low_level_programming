#include <stdio.h>
#include <main.h>

unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (b == NULL)
        return 0;

    while (*b)
    {
        if (*b == '0' || *b == '1')
        {
            result = result * 2 + (*b - '0');
        }
        else
        {
            return 0;  // Invalid character encountered
        }
        b++;
    }

    return result;
}
