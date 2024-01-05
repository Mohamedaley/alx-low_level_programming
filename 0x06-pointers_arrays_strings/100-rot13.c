#include "main.h"
/**
 * rot13 - this function is made to encode a text;
 * @s: this is the text;
 */
char *rot13(char *s)
{
	char *enc = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char *encl = "nopqrstuvwxyzabcdefghijklm";
	char *alphl = "abcdefghijklmnopqrstuvwxyz";
	char *alphu = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i,j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 25; j++)

		{
		if (s[i] == alphl[j])

			{
				s[i] = encl[j];	
			}
		else if(s[i] == alphu)

			{
			s[i] = enc[j]
			}
		}
	}
}
