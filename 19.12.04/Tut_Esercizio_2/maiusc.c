#include <stdio.h>
#include <ctype.h>
char maiusc(char c)
{
	if (islower(c))
		c = toupper(c);
	return c;
}