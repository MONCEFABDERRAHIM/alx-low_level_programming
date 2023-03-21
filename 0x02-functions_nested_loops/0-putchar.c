#include "main.h"

/**
* main - print _putchar
* Description : Write a program that prints _putchar, followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char printer[8] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(printer[i]);
	}
	_putchar('\n');
	return (0);
}
