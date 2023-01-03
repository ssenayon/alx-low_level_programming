#include <stdio.h>
/**
 * main - exclusion
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar (alpha);
	}
	putchar ('\n');
	return (0);
}
