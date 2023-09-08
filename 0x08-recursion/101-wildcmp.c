#include "main.h"

/**
 *
 */

int cmp(char *s1, char *s2, int i, int j)
{
	if (*(s1 + i) != '\0') 
		return 0;
	if (*(s2 + j) == '*')
	{
		while (*(s2 + j) == '*')
		{
			j++;
		}	
		while (*(s1 + i) != '\0') 
		{
			return (cmp(s1, s2, i++, j)); 
		}
	}
	if (*(s1 + i) == *(s2 + j))
		return (cmp(s1, s2, i + 1, j+1));
}
int wildcmp(char *s1, char *s2)
{
	return (cmp(s1, s2, 0, 0));
}
