#include "main.h"

/**
 * print_numbers - print num since 0  up to 9
 * Return: The numbers since 0 up to 9
 */

void print_numbers(void)

{

	int a = 0;

	while (a < 10)

		_putchar(a++ + '0');

	_putchar('\n');
}
