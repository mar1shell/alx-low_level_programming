#include "main.h"
#include <math.h>

/**
* _atoi -converts a str to an int
* @s : str
* digits_counter - function that returns number
* of digits in str
* @t : str
* Return : digits found in str
*/

int digits_counter(char *t);
/**
* _atoi -converts a str to an int
* @s : str
* digits_counter - function that returns number
* of digits in str
* @t : str
* Return : digits found in str
*/
int _atoi(char *s)
{
	int i, n, r;

	r = 0;
	i = 0;
	n = digits_counter(s) - 1;
	while (*(s + i) != (char) 0)
	{
		if (*(s + i) > 47 && *(s + i) < 58)
		{
			r = r + ((*(s + i)) * pow(10, n);
			n--;
			i++;
		}
		else
			break;
	}
	return (r);
}

int digits_counter(char *t)
{
	int re, i;

	re = 0;
	i = 0;
	while (*(t + i) != (char) 0)
	{
		if (*(t + i) > 47 && *(t + i) < 58)
		{
			i++;
			re++;
		}
		else
			break;
	}
	return (re);
}
