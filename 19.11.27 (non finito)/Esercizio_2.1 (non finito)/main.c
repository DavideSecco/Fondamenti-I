#include <stdio.h>
#include <stdlib.h> 

extern char *converti(unsigned int n);

int main()
{
	unsigned int n = 23;
	char *p=malloc(1200);
	p = converti(n);
	return 0;
}
