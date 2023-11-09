#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2);
{
	char *ptr;
	int len1, len2, i = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	for (len1 = 0; s1[i] != '\0'; len1++)
		;
	for (len2 = 0; s2[j] != '\0'; len2++)
		;
	ptr = malloc(sizeof (char) *(s1 + s2 + 1));
	
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1
	}

	for (i = 0; i < len2; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	ptr[len1 + len2 = '\0'];
	return (ptr);
}
