#include <stdlib.h> 

int *clamped(const int *v, size_t n, int min, int max)
{
	int *v2 = malloc(n * 4);

	if (v == NULL || n == 0 || min > max)
	{
		free(v2);
		return NULL;
	}

	for (size_t i = 0; i < n; i++)
	{
		if (v[i] < min)
			v2[i] = min;

		else if (v[i] > max)
			v2[i] = max;

		else
			v2[i] = v[i];
	}

	return v2;
}