#include <stdio.h>
/**
 *
 *
 */
int main()
{
	int i, len;
	char *str = "this is the new file";

	for (len = 0; str[len] != 0; len++)
	{
	}
	for (i = len; i >= 0; i--)
	{
	putchar(str[i]);	
	}
}
