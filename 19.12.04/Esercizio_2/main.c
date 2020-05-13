#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdlib.h>

#include "lettura.h"

int main()
{
	size_t size = -1;
	int *p;
	p = leggiinteri2("dati1.bin", &size);
	free(p);
	return 0;
}