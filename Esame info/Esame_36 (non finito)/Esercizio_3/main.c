#include "stringhe.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char *p = "ciao questa e' piu' lunga";
	size_t n = 10;
	char *v=spacefill(p, n);
	return 0;
}