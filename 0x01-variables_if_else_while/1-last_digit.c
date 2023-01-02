#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print last digit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	
	m = n % 10;

	if (m > 5)
		printf("last digit of %d is and is greater than 5\n", n);
	else if (m == 0)
		printf("last digit of %d is and is 0\n", n);
	else
		printf("last digit of %d is and is less than 6 and not 0\n", n);

return (0);

}
