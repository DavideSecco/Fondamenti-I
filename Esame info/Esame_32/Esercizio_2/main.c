#include <stdint.h>

extern unsigned int *tartaglia(unsigned int *v, size_t n);

int main(void)
{
	unsigned int *v2;
	unsigned int v[3] = { 1,2,1 };
	size_t n = 3;
	v2 = tartaglia(v, n);
	free(v2);
	return 0;
}