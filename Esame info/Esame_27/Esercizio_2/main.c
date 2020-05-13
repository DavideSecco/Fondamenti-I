#include <stdbool.h>
#include <ctype.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

extern void stampa_cornicetta(const char *s);

int main()
{
	const char s[] = "prova";
	stampa_cornicetta(s);
	return 0;
}