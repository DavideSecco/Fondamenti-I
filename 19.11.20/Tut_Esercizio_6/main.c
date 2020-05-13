#include <stdint.h>
#include <stdlib.h>
int *merge(int *src1, int *src2, size_t size)
{
	int a = 0;
	int b = 0;
	int *res = malloc(size * sizeof(int));
	for (size_t i = 0; i < 2*size; i++)
	{
		if (((i+2) % 2)==0)
		{
			res[i] = src1[a];
			a++;
		}
		else
		{
			res[i] = src2[b];
			b++;
		}
	}
	return res;
}

int main()
{
	size_t size = 4;
	int src1[] = { 1,3,5,7 };
	int src2[] = { 2,4,6,8 };
	int *res;
	res = merge(src1, src2, size);
	return 0;
}