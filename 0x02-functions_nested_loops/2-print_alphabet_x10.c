#include "main.h"
/**
 * This function prints the alphabet 10 times
 *
 * Return void
 */

void print_alphabet_x10(void)
{
	int i;

	for  (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)

		{
			_putchar(c);
		}

		-putchar('\n');
	}
}
