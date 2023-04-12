#include "main.h"
/**
 * argstostr - concatinates all string
 * @ac: parameter
 * @av: parameter
 * Return: (Success)
 */
char *argstostr(int ac, char **av)
{
	int i, total_len, current_pos;

	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_len = 1;

	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}

	result = (char *) malloc(total_len * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	current_pos = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(result + current_pos, av[i]);
		current_pos += strlen(av[i]);
		result[current_pos] = '\n';
		current_pos++;
	}

	return (result);
}
