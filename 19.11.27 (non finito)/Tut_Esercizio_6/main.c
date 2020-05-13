#include <stdlib.h>
#include <stdint.h>

float *ripeti(float val, uint32_t n)
{
	float *v = malloc(n * sizeof(float));
	for (size_t i = 0; i < n; i++)
	{
		v[i] = val;
	}
	return v;
}

int main()
{
	uint32_t size = 5;
	float val = 20;
	float *v;
	v = ripeti(val, size);
	return 0;
}