#include "holberton.h"
/**
 * main - print "Holberton" followed by a newline.
 *
 * Description: You are not allowed to use std libraries
 * Return: 0
 */
int main(void)
{
	char holberton[] = "Holberton";
	int i = 0;

	while (holberton[i] != '\0')
	{
		_putchar(holberton[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
