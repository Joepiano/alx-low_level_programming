#include "main.h"

/**
 * print_square - prints a square followed by a new line;
 * @size: length and width of square
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int length, column;

		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
