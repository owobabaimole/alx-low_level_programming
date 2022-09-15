#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 * Return: 0
 */

void more_numbers(void)
{
	int a, ro;

	for (ro = 0; ro < 10; ro++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
