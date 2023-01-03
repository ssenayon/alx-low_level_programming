#include <stdio.h>
/**
 * main - combo
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar (n);
		if (n == 9)
			continue;
		putchar (',');
		putchar (' ');
	}
		putchar('\n');
		return (0);
}
