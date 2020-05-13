#define _CRT_SECURE_NO_WARNINGS

#include "sequenza.h"

extern bool seq_load (const char *filename, struct seq *s)
{
	FILE *f = fopen(filename, "rb");
	
	if (f == NULL)
		return false;
	
	fseek(f, 0, SEEK_END);
	size_t dim = ftell(f)/2;
	rewind(f);

	s->values = malloc((dim+1)*2);

	fread(s -> values, 2, dim, f);	
	s->len = dim;

	fclose(f);
	return true;
}