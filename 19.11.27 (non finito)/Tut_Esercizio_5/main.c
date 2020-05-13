#include <stdint.h>

int somma_sottrai(int *v, size_t n)
{
	int somma = 0;
	for (size_t i = 0; i < n; i++)
	{
		if ((i % 2) == 0)
			somma = somma + v[i];
		else
			somma = somma - v[i];
	}
	return somma;
}

int main()
{
	int v[5] = { 1,2,3,4,5 };
	size_t size=5;
	int somma;
	somma = somma_sottrai(v, size);
	return 0;
}