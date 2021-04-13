#include "header_file.h"

/**
 * _strlen - Entry point
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0, c = 0;

	for ( ; s[i] != '\0' ; i++)
		c++;
	return (c);
}

/**
 **_strcpy - Copy string for dest.
 *@dest: destination variable
 *@src: source variable
 *Return: 
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	for ( ; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}
	dest[len] = 0;
	return (dest);
}

/**
 *_strchr - function locates the first occurrence of character
 *@s: string to be examined
 *@c: character to find
 *Return:
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);    /* return a pointer to the character c */
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return ('\0');
}

int _strncmp(char *s1, char *s2, size_t n_bytes)
{
	size_t i = 0, j = 0;

	while (i < n_bytes)
	{
		if (s1[i] != s2[i])
		{
			j = (s1[i] - s2[i]);
			break;
		}
		else
			j = (0);
		i++;
	}
	return (j);
}

/**
 *_strcmp - compare two strings
 *@s1: string one
 *@s2: string two
 *Return: If s1 and s2 are equal, returns 0; if s1 is greater than s2, 
 returns 1. If these two conditions are not fulfilled, returns -1
 */

int _strcmp(char *s1, char *s2)
{
	int q;

	if (_strlen(s1) == _strlen(s2))
	{
		for (q = 0; s1[q] && s2[q] != '\0'; q++)
			if (s1[q] != s2[q])
				return (s1[q] - s2[q]);
		return (0);
	}
	else if (_strlen(s1) > _strlen(s2))
		return (1);
	return (-1);
}
