#include <stdio.h>
#include <string.h>

int is_palindrome(char *s);

int is_alphanumeric(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}

int recursive_palindrome(char *s, int start, int end) {
    if (start >= end) {
        return 1;
    }

    if (s[start] != s[end]) {
        return 0;
    }

    return recursive_palindrome(s, start + 1, end - 1);
}

int is_palindrome(char *s) {
    int length = strlen(s);
    if (length <= 1) {
        return 1;
    }

    int start = 0;
    int end = length - 1;

    while (start < end) {
        while (start < length && !is_alphanumeric(s[start])) {
            start++;
        }
        while (end >= 0 && !is_alphanumeric(s[end])) {
            end--;
        }

        if (start < length && end >= 0) {
            if (s[start] != s[end]) {
                return 0;
            }
            start++;
            end--;
        }
    }

    return 1;
}

int main(void) {
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return 0;
}

