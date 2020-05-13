#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

bool scrivi_intero(const char *prova,  int i)
{
	FILE *f = fopen(prova, "wb");
	if (f == NULL)
		return false;
	fprintf(f, "%d", i);
	fclose(f);
	return true;
}