#include "main.h"
#include <string.h>


int is_palindrome(char *s)
{
    int length = strlen(s);
    int i;

    for (i = 0; i < length / 2; i++) {
        if (s[i] != s[length - 1 - i]) {
            return 0; // Not a palindrome
        }
    }

    return 1; // Palindrome
}

