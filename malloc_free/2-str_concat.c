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
	int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	ptr = malloc(len1 + len2 + 1);

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	ptr[len1 + len2] = '\0';
	return (ptr);
}
