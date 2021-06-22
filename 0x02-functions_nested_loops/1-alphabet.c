#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
