#include <stdlib.h> 

extern int *clamped(const int *v, size_t n, int min, int max);

int main(void)
{
	int v[4] = { 1,24,56,170 };
	int min = 23;
	int max = 70;
	size_t n = 4;
	int *v2 = clamped(v, n, max, min);
	return 0;
}