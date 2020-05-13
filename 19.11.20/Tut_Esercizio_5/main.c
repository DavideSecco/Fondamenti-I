#include <stdint.h>
#include <stdlib.h>
int *are_multiple(int *v, size_t size, int n)
{
	int *v2=malloc(size*sizeof(int));
	for (size_t i = 0; i < size; i++)
	{
		if (v[i] % n == 0)
			v2[i] = 1;
		else
			v2[i] = 0;
	}
	return v2;
}

int main()
{
	int v[] = { 3,5,6,9,2 };
	size_t size = 5;
	int n = 2;
	int *v2 = malloc(size * sizeof(int));
	v2 = are_multiple(v, size, n);
	free(v2);
	return 0;
}