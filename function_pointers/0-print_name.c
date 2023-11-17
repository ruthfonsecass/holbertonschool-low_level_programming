#include "funtion_pointers"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 * @f: pointeur
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
