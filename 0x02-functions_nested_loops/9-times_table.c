#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * bax = row, mose = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int bax, mose, d;

	for (bax = 0; bax <= 9; bax++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (mose = 1; mose <= 9; mose++)
		{
			d = (bax * mose);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (mose < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
