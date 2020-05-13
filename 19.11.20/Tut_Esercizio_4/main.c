#include <stdint.h>
#include <stdlib.h>

void somma_n(uint32_t *n)
{
	uint32_t somma = 0;
	for (uint32_t i = 1; i <= *n; i++)
	{
		somma = somma + i;
	}
	*n = somma;
}

int main()
{
	uint32_t val = 4;
	uint32_t *n = val; //così non va, ma basta mettere malloc
	somma_n(n);
	return 0;
}