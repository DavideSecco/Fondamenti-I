#define _CRT_SECURE_NO_WARNINGS

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "lettura.h"

double *leggidouble(const char *filename, size_t *size)
{
	FILE *f = fopen(filename, "r");

	if (f == NULL)
		return NULL;

	double a;

	if (fscanf(f, "%lf", &a) == EOF)
		return NULL;
	
	int n = 0;
	int nread;
	
	while (1)
	{
		nread=fscanf(f, "%lf", &a);
		if (nread==EOF)
				break;
		n++;
	}

	rewind(f);
	double *p = malloc((n+1)*sizeof(double));
	for (int i = 0; i <= n; i++)
	{
		fscanf(f, "%lf", &p[i]);

	}
	fclose(f);
	*size = n+1;
	return p;
}
