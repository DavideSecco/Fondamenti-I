#include <stdio.h>
#include <ctype.h>
char maiusc(char c)
{
	if (islower(c))
		c = toupper(c);
	return c;
}

int main()
{
	char a = 'd';
	char A;
	A = maiusc(a);
	return 0;
}