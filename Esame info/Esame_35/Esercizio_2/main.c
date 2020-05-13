#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

extern bool cifre_duplicate_hex(unsigned int n);

int main()
{
	unsigned int n = 2;
	bool ris = cifre_duplicate_hex(n);
	return 0;
}