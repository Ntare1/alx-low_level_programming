#include "main.h"
/**
 * times_table - its makes a time table
 */
void times_table(void)
{
	int abc, hij, y;

	for (abc = 0; abc <= 9; abc++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (hij = 1; hij <= 9; hij++)
		{
			y = (abc * hij);
			if ((y / 10) > 0)
			{
				_putchar((y / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((y % 10) + '0');

			if (hij < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
