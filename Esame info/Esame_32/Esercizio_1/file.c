#include <stdio.h>

void stampa_tavola_pitagorica(FILE *f, unsigned int n)
{
	for (size_t r = 1; r <= n; r++)
	{
		for (size_t c = 1; c <= n; c++)
		{
			fprintf(f, "%d\t", r*c);
		}
		fprintf(f, "\n");
	}
}