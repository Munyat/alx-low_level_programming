#include "holberton.h"
/**
 * main - print "Holberton" followed by a newline.
 * You are not allowed to use starndard libraries
 * return: 0
 */
int main(void)
{
	char holberton[] = "Holberton";
	init i = 0;

	while (holberton[i] != '\0')
	{
		_putchar(holberton[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
