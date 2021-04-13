#include "header_file.h"

/**
 *_strtok - function that tokenizes word for word
 *@str: alloced the string to be tokenized
 *@delim: separator of words
 *Return: the buff tokenized
 */
char *_strtok(char *str, char *delim)
{
	static int i = 0;
	static char *s = NULL;
	int j = 0;
	char *p = NULL;

	if (str == NULL)
		i++;
	else
		s = str;
	p = _calloc(512, sizeof(char));
	if (p == NULL)
		return (NULL);
	for ( ; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == delim[0])
			continue;
		else
		{
			p[j] = s[i];
			if (s[i + 1] == ' '|| s[i + 1]=='\n' || s[i + 1]=='\t' || s[i + 1] == delim[0])
			{
				j++;
				break;
			}
			j++;
		}
	}
	p[j] = '\0';
	return (p);
}

/**
 *_strtok_v2 - function that tokenizes a complete string
 *@s: buff of the getline
 *@delim: separator of words
 *Return: the buff tokenized
 */
char *_strtok_v2(char *s, char *delim)
{
	int i = 0, j = 0;
	char *p = NULL;

	p = _calloc(20, sizeof(char));
	if (p == NULL)
		return (NULL);
	for ( ; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == ':' || s[i] == '\n' || s[i] == '\t' || s[i] == delim[0])
			continue;
		else
		{
		p[j] = s[i];
		if (s[i + 1] == ' ' || s[i + 1] == ':' || s[i + 1] == '\n' || s[i + 1] == '\t' || s[i + 1] == delim[0])
			p[j + 1] = ' ',
			j++;
		j++;
		}
	}
	p[j] = '\0';
	return(p);
}
