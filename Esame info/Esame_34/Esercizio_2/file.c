#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

double fatt(size_t n)
{
	double fatt = 1;
	size_t i = 1;
	while (i <= n)
	{
		fatt = fatt * (double)i;
		i++;
	}
	return fatt;
}

double pot(double x, size_t n)
{
	double pot=x;
	size_t i = 1;
	while (i < (2*n + 1))
	{
		pot = pot * x;
		i++;
	}
	return pot;
}

extern double seno_iperbolico(double x)
{
	double sen1 = 0;
	double sen2 = -1;

	for (size_t n=0;; n++)
	{
		double a = fatt(2*n+1);

		double b = pot(x, n);

		sen1 = sen1 + (1 /(double)a )*b;

		if (sen1 == sen2)
			break;

		sen2 = sen1;
	}
	return sen1;
}