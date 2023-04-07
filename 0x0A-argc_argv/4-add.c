#include  "main.h"
/**
 * main - program adds two command line positive numbers
 * @argc: parameter - counts number of arguments(Numbers in this case)
 * @argv: parameter - number of strings in those argumentes
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		while (*arg != '\0')
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
