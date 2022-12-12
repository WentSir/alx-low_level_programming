#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets
 *
 * Return: 0
 */
int main(void)
{
	int ch = 'a';

	while (ch <= '2')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
