#include "header_file.h"

/**
 * - 
 *@: 
 *@: 
 *Return: 
 */
char **alloc_double_pointer(int count_wds, char *buff, char *delim)
{
	char **buff_two = NULL, *p = NULL;
	int i = 0, len = 0;
	
	len = _strlen(buff);
	buff_two = malloc(len * sizeof(char *));
	if (buff_two == NULL)
		return (NULL);
	for ( ; i < count_wds; i++)
	{
		if (i == 0)
			p = strtok(buff, delim);
		else
			p = strtok(NULL, delim);
		buff_two[i] = p;
	}
	buff_two[i + 1] = NULL;
	return (buff_two);
}

/**
 * - 
 *@: 
 *@: 
 *Return: 
 */
int _words(char *buff)
{
    int separator = 0, i = 0;
    unsigned number_w = 0;

    for ( ; buff[i] != '\0'; i++)
    {
        if (buff[i] == ' ' || buff[i] == '\n' || buff[i] == '\t' || buff[i] == ':')
            separator = 0;
        else if (separator == 0)
        {
            separator = 1;
            number_w++;
        }
    }
    return number_w;
}

/**
 *_calloc - function that allocates memory for an array
 *@nmemb: number of memory blocks
 *@size: size of each block
 *Return: pointer to mem_arr or NULL (if it fails)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem_arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem_arr = malloc(nmemb * size);
	if (mem_arr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		mem_arr[i] = 0;
	return (mem_arr);
}

/**
 * - 
 *@: 
 *@: 
 *Return: 
 */
char *_getenv(const char *name)
{
	int i = 0;
	unsigned int len = 0;
	char *value = NULL, *address = NULL;

	len = _strlen((char *)name);
	for ( ; environ[i] != NULL; i++)
	{
		address = environ[i];
		value = _strchr(address, '=');
		if (value && (((value - address) == len) && !_strncmp(address, (char *)name, len)))
			return (value + 1);
	}
	return (NULL);
}
