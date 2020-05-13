#include <stdint.h>

void divisore_minimo(uint32_t *x)
{
	if (*x < 2)
	{
		*x = 0;
	}

	size_t i = 2;
	while (*x%i != 0)
	{
		i++;
	}
	*x = i;
}

int main()
{
	uint32_t n = 857;
	divisore_minimo(&n);
	return 0;
}