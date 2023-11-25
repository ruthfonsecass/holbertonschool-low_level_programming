#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *cap_string(char *)
{
	int i = 0
	char s1[];
	char s2[];

	while (s1 != '\0')
	{
		s2[i] = toupper(s1[i]);
		i++;
	}
	s2[i] = '\0';

	return (s2);
}
