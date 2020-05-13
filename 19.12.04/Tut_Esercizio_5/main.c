#include <stdint.h>
#include <stdlib.h>

float prodotto_scalare(float *v1, float *v2, size_t n)
{
	float ris = 0;
	for (size_t i = 0; i < n; i++)
	{
		ris = ris + v1[i] * v2[i];
	}
	return ris;
}

int main()
{
	float v1[] = { 1,2, -2};
	float v2[] = { 1,2, 2};
	float ris;
	size_t n = 3;
	ris = prodotto_scalare(v1, v2, n);
	return 0;
}