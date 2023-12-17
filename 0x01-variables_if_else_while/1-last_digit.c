#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point 
 * here we have made a variable last_number to store the last digit of n
 * return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_number = n%10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_number);
	if(n == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_number);
	if(n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_number);
	return (0);
}
