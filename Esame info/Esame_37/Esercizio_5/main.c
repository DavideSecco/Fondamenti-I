#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

extern unsigned int irpef(unsigned int stipendio, unsigned int *scaglioni,	unsigned int *aliquote, size_t n);

int main()
{
	unsigned int stip = 20000;
	unsigned int scaglioni[] = {0,15000,28000,55000,75000 };
	unsigned int aliquote[] = {23,27,38,41,43};
	size_t n = 5;
	unsigned int stip2 = irpef (stip, scaglioni, aliquote, n);
	return 0;
}