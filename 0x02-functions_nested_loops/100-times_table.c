#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table.
 * Return: 0.
 */
void print_times_table(int n)
{
	int i, j, rem;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				rem = (i * j);
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (rem < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((rem % 10) + '0');
				}
				else if (rem >= 10 && rem < 100)
				{
					_putchar(' ');
					_putchar((rem / 10) + '0');
					_putchar((rem % 10) + '0');
				}
				else if (rem >= 100 && j != 0)
				{
					_putchar((rem / 100) + '0');
					_putchar((rem / 10) % 10 + '0');
					_putchar((rem % 10) + '0');
				}
				else
					_putchar((rem % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
