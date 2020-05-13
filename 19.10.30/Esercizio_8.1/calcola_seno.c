#include <stdlib.h>
#include <stdint.h>

double exp(double base, double esp)
{
	double exp = 1;
	for (size_t i = 0; i < esp; i++)
	{
		exp = exp * base;
	}
	return exp;
}

double fatt(double x)
{
	double fatt = 1;
	for (size_t i = 1; i <= x; i++)
	{
		fatt = fatt * i;
	}
	return fatt;
}

double calcola_seno(double x)
{
	double senx = 0, old_senx=10;
	size_t n = 0;
	while(senx!=old_senx)
	{
		old_senx = senx;
		senx = senx + ((exp(-1, n) / fatt(2 * n + 1)))*(exp(x, 2 * n + 1));
		n++;
	}
	return senx;
}
