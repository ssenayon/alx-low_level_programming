#include <stdio.h>
/**
 * main - Base ten putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 10; n++)
		putchar((n % 10) + 'n');
	putchar("\n");
	return (0);
}
