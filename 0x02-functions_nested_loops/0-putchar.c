#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 * Return: 0
**/

int main(void)
{
	unsigned int i;
	char c[] = "_putchar";

	for (i = 0; i < sizeof(c); i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

	return (0);
}
