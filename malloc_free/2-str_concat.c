#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code
 * @s1: string
 * @s2: string 2
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	for (len1 = 0; s1[i] != '\0'; len1++)
		;
	for (len2 = 0; s2[j] != '\0'; len2++)
		;
	ptr = malloc(len1 + len2 + 1);

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		ptr[len1 + j] = s2[j];
	}
	ptr[len1 + len2] = '\0';
	return (ptr);
}
