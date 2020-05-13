#include <stdlib.h>
#include <stdint.h>

int calcola_minimo(int *v, size_t n)
{
	int min = v[0];
	for (size_t i = 1; i < n; i++)
	{
		if (v[i] < min)
			min = v[i];
	}
	return min;
}

int main()
{
	int v[5] = { 3,1,6,8,56 };
	int min, size = 5;
	min = calcola_minimo(v, size);
	return 0;
}