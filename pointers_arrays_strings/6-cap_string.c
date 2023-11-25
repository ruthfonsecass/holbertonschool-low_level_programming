#include "main.h"


/**
 * cap_string - check the code
 * @s: string
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i = 0;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}', '\0'};

	if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -= 32;
	}
	while (s[i])
	{
		int b = 0;

		while (sep[b])
		{
			if (s[i] == sep[b])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
			b++;
		}
		i++;
	}

	return (s);
}
