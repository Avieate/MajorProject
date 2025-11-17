#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int k = atoi(argv[1]) % 26;
    char pt[32767];

    printf("Plaintext: ");
    fgets(pt, sizeof(pt), stdin);

    printf("Ciphertext: ");
    for (int j = 0; j < strlen(pt); j++)
    {
        char c = pt[j];
        if (isupper(c))
        {
            printf("%c", (c - 'A' + k) % 26 + 'A');
        }
        else if (islower(c))
        {
            printf("%c", (c - 'a' + k) % 26 + 'a');
        }
        else
        {
            printf("%c", c);
        }
    }

    return 0;
}
