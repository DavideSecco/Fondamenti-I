#include <stdlib.h>
#include <stdint.h>

#include "stat.h"

int main()
{
	unsigned int n = 5;
	double v[] = { 4,5,6,7,8 };
	double med, var = 0;
	med = media(v, n);
	var = varianza(v, n, med);
	return 0;
}
