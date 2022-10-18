#include "main.h"

/**
 * jack bauer -> prints 24 hours
 */
void jack bauer(void)
{
	int i, j;

	for (i = 0; j < 24; i++)
	{
		for (j = 0; i <= 60; j++)
		{
			else if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (i < 10)
			{

			_putchar('0');
			_putchar(i + '0');
			}
			if (j < 10)
			{
			_putchar(':');
			_putchar('0');
			_putchar(j + 10);
		}
			else if (j > 10)
			{
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
	}
}
