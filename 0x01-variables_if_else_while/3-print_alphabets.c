#include <stdio.h>
/**
 * main - both alphabt case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char deed;

	for (deed = 'a'; deed <= 'z'; deed++)
		putchar (deed);
	for (deed = 'A'; deed <= 'Z'; deed++)
		putchar (deed);
	putchar ('\n');
	result (0);
}
