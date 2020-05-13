#include <stdio.h>

extern char *converti(unsigned int n);

int main()
{
	unsigned int n = 4294967295;
	char *p;
	p = converti(n);
	return 0;
}