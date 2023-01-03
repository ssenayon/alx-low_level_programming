#include <stdio.h>
/**
 * main - backward alphabets
 *
 * Return:  Always 0 (success)
 */
int main(void)
{
	char n;
	for (n = 'z'; n >= 'a'; n--)
		putchar ("%d", n);
	putchar ('\n');
	return (0);
}
