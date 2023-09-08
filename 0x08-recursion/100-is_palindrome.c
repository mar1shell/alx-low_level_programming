#include "main.h"

/**
 * _strlen - length of a tring
 * @s: string
 * Return: length of s
 */

int _strlen(char *s)
{
	int i, r;

	for (i = 0; *(s + i) != (char) 0; i++)
	{
		r++;
	}
	return (r);
}

/**
 * ispal - checks if a string is a palindrome
 * @s: string
 * @left: int
 * @right: int
 * Return: 1 if palindrome; else 0
 */

int ispal(char *s, int left, int right)
{
	if (left >= right)
		return 1;
	if (*(s+left) == *(s+right) && ispal(s, left+1, right-1) == 1){
		return 1;
	}
	return 0;
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if palindrome; else 0
 */

int is_palindrome(char *s)
{
	int length = _srtlen(s);
	ispal(s, 0, length-1);
}

