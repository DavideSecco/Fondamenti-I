#define _CRT_SECURE_NO_WARNINGS

#include "rapporti.h"

struct rapporto *leggi_rapporti(const char *filename, uint16_t *n)
{
	FILE *f = fopen(filename, "rb");
	if (f == NULL)
		return NULL;

	fread(n, 2, 1, f);

	struct rapporto *v = malloc((*n+1)*sizeof(struct rapporto));

	for (size_t i = 0; i < *n; i++)
	{
		size_t pos = ftell(f);
		fread(&v[i].id, sizeof(uint16_t), 1, f);
		fread(&v[i].tipo, 1, 1, f);
		fread(&v[i].valore, sizeof(float), 1, f);
	}
	fclose(f);
	return v;
}