#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line
 *
 * Return: 0-9, without 2 and 4, followed by a new line
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
