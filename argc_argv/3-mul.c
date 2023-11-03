#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int num1, num2, results;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	results = num1 * num2;

	printf("%d\n", results);

			return (0);
}
