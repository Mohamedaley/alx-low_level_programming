#include <stdio.h>
int main()
{

	int i = 0;
        int length;
	char *s = "this string was made to test";

        for (length = 0; s[length] != '\0'; length++)
        {
        }

        for (i = length - 1; i >= 0; i--)
        {
                putchar(s[i]);
        }
        putchar('\n');
}
