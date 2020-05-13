#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

extern double seno_iperbolico(double x);

int main()
{
	double x = 2;
	double seh = seno_iperbolico(x);
	return 0;
}