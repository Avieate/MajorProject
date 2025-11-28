#include <ctype.h>
#include "caesar.h"

char encrypt_char(char c, int k)
{
    if (isupper(c))
    {
        return (c - 'A' + k) % 26 + 'A';
    }
    else if (islower(c))
    {
        return (c - 'a' + k) % 26 + 'a';
    }
    else
    {
        return c; // Non-alphabetic characters remain unchanged.
    }
}
