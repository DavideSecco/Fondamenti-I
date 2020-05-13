#include <stdlib.h>
#include <stdint.h>

void copy(uint32_t *dst, uint32_t *srs, size_t n)
{
	for (uint32_t i = 0; i < n; i++) {
		dst[i] = srs[i];
	}
}

int main()
{
	size_t n = 3;
	uint32_t *v1 = malloc(n * sizeof(uint32_t));
	uint32_t *v2 = malloc(n * sizeof(uint32_t));
	v1[0] = 2;
	v1[1] = 3;
	v1[2] = 4;
	copy(v2, v1, n);
	free(v1);
	free(v2);
	return 0;
}