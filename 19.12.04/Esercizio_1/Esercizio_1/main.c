#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include "lettura.h"
int main()
{
	size_t *dim=malloc(sizeof(size_t));
	int *p;
	p = leggiinteri("dati1.bin", dim);
	free(p);
	return 0;
}