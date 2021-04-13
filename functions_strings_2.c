#include "header_file.h"


/**
 *str_concat - concatenates two strings
 *@s1: pointer type char with a string
 *@s2: pointer type char with a string
 *Return: pointer to str or NULL (if it fails)
 */
/* char *_strcat(char *s1, char *s2)
{
	char *concat;           
	int i = 0, j = 0;        
	int c1, c2 = 0;         

	if (s1 == NULL)  
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')    
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	concat = malloc(((i + j) + 1) * sizeof(char));
	if (concat == NULL)  
	{
		return (NULL);
	}
	for (c1 = 0; c1 < i; c1++)
	{
		concat[c1] = s1[c1];
	}
	for (c1 = i; c1 <= i + j; c1++)
	{
		concat[c1] = s2[c2];
		c2++;
	}
	return (concat);
} */


char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, counter = 0;

	for ( ; dest[i] != '\0'; i++)
		counter++;
	for ( ; src[j] != '\0'; j++)
		dest[counter + j] = src[j];
	dest[counter + j] = '\0';
	return (dest);
}

/**
 * _itoa - function that change a integer to string
 * @number: integer to convert
 * Return: a string with of integer
 */
char *_itoa(int number)
{
	int i, j, k, h;
	char *s, *str;

	s = _calloc(512, sizeof(char));
	for (i = 0 ; number > 0 ; i++)
	{
		s[i] = (number % 10) + '0';
		number = (number / 10);
	}
	s[i] = '\0';
	j = _strlen(s);
	h = j;
	h--;
	str = _calloc(j + 1, sizeof(char));
	for (k = 0; k < j ; k++)
	{
		str[k] = s[h];
		h--;
	}
	free(s);
	str[k] = '\0';
	return(str);
}
