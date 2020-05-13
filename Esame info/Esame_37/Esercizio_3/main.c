#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

extern char *serpentino_encode(const char *s);

int main()
{
	const char s[] = "ciao";
	char *v = serpentino_encode(s);
	return 0;
}