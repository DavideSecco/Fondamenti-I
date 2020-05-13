#include <stdint.h>

double serie(unsigned int n)
{
	double ris = 0;
	for (size_t i = 1; i <= n; i++)
	{
		ris = ris + (1 / ((double)i*i));
	}
	return ris;
}