#include "main.h"
int cmp(char *s1, char *s2, int i, int j) {
    /* Base case: If both strings reach the end, it's a match */
    if (s1[i] == '\0' && s2[j] == '\0') {
        return 1;
    }

    /* If s2[j] is an asterisk, skip consecutive asterisks */
    while (s2[j] == '*') {
        j++;
    }

    /* If s1[i] matches s2[j], continue the comparison */
    if (s1[i] == s2[j]) {
        return cmp(s1, s2, i + 1, j + 1);
    }

    /* No match, return 0 */
    return 0;
}

int wildcmp(char *s1, char *s2) {
    return cmp(s1, s2, 0, 0);
}

