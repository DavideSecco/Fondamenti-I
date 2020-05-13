#include <stdint.h>

uint32_t somma_n(uint32_t n)
{
	int somma = 0;
	for (size_t i = 1; i <= n; i++)
	{
		somma = somma + i;
	}
	return somma;
}

int main()
{
	int somma, n=4;
	somma = somma_n(n);
	return 0;
}