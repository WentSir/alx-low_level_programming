#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets both e and q
 *
 * Return: 0
 */

int main(void)

{
	char ch = 'a';

	while (ch <= '2')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
