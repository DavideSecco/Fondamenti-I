#include <stdint.h>
#include <stdlib.h>
void x_alla_x(uint32_t *x)
{
	uint32_t n = *x;
	for (size_t i = 1; i < n; i++)
	{
		*x = *x * n;
	}
}

int main()
{
	uint32_t *n = malloc(sizeof(uint32_t)); 
	*n = 4;
	x_alla_x(n);
	return 0;
}