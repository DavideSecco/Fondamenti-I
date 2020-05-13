#include <stdlib.h>
#include <stdint.h>

unsigned int *tartaglia(unsigned int *v, size_t n)
{
	unsigned int *v2 = malloc(4);
	v2[0] = 1;

	if (n == 0)
		return v2;

	

	if (n == 1)
	{
		v2 = realloc(v2,8);
		v2[0] = 1;
		v2[1] = 1;
		return v2;
	}

	v2 = realloc(v2, (n+1) * 4);
	v2[0] = 1;
	size_t i = 1;
	while (i <n)
	{
		v2[i] = v[i] + v[i - 1];
		i++;
	}

	v2[i] = 1;

	return v2;
}