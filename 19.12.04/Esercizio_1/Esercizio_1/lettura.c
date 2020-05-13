#define _CRT_SECURE_NO_WARNINGS
#include "lettura.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

int *leggiinteri(const char *file, size_t *size)
{
	FILE *f;
	 
	f = fopen(file, "rb");
	if (f == NULL)
		return NULL;
	
	uint32_t num_elem;
	size_t nread = fread(&num_elem, sizeof(uint32_t), 1, f);

	*size = num_elem;

	if (nread != 1)
	{
		fclose(f);
		return NULL;
	}

	int *p = malloc(*size * sizeof(int));

	nread = fread(p, sizeof(int), num_elem, f);

	fclose(f);
	return p;
}