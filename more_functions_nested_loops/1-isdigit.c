#include "main.h"

/**
 * _isdigit - checks for uppercase character
 * @c: character to be checked
 * Returns: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

