#include "main.h"
/**
 * main - takes two arguments and multiplies them
 * @argc: parameter to count number of arguments
 * @argv: parameter for argument-vector to count strings
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int first_arg, second_arg, result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	first_arg = atoi(argv[1]);
	second_arg = atoi(argv[2]);

	result = first_arg * second_arg;

	printf("%d\n", result);
	return (0);
}
