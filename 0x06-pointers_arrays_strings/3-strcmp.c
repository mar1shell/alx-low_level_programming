#include "main.h"

/**
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
			return (-15);
		if (*s1 > *s2)
			return (15);
		s1++;
		s2++;
	}
	if (*s1 < *s2)
		return (-15);
	if (*s1 > *s2)
		return (15);
	return (0);
}
