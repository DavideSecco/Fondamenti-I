#define _CRT_SECURE_NO_WARNINGS

#include "lettura.h"

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>


int *leggiinteri2(const char *filename, size_t *size)
{
	FILE *f= fopen(filename, "rb");
	
	if (f == NULL) {
		fclose(f);
		*size = 0;
		return NULL;
	}
	
	if (fgetc(f) == EOF){
		fclose(f);
		*size = 0;
		return NULL;
	}

	rewind(f);

	int i=0;
	int a;
	while (1) {

		int nread = fread(&a, sizeof(int), 1, f);
		if (nread!=1) {
			break;
		}
		i++;
	}
	int *p = malloc((i) * sizeof(int));
	rewind(f);
	size_t letti=fread(p, sizeof(int), i, f);
	fclose(f);
	*size = i;
	return p;
}