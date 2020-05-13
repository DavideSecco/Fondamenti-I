#include <stdint.h>

#include "somma_n.h"

uint32_t somma_n(uint32_t n)
{
	int somma = 0;
	for (size_t i = 1; i <= n; i++)
	{
		somma = somma + i;
	}
	return somma;
}
