#include "main.h"

/**
 * jack_bauer - check the code
 * Descrpition: 'print horas e minutos.'
 * Return: void
 */
void jack_bauer(void)
{
	int hours = 0;
	int min = 0;

	for (hours = 0; hours <= 23; hours++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');

		}
	}
}
