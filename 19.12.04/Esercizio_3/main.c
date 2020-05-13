#include <stdint.h>
#include <stdlib.h>
#include "lettura.h"

int main()
{
	size_t size = -1;
	double *p;
	p = leggidouble("dati1.txt", &size);
	free(p);
	return 0;
}