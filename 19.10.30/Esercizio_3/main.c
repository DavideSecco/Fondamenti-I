#include <stdlib.h>
#include <stdint.h>

 void iota(uint32_t *x, size_t n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		x[i] = i;
	}
}

int main()
{
	size_t n = 5;
	uint32_t *x = (n * sizeof(uint32_t));
	iota(x,n);
	free(x);
	return 0;
}