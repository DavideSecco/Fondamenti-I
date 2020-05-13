#include <stdint.h>

uint32_t divisore_minimo(uint32_t x)
{
	if (x < 2)
	{
		return 0;
	}

	size_t i = 2;
	while (x%i != 0)
	{
		i++;
	}
	return i;
}

int main()
{
	uint32_t n=853;
	uint32_t div;
	div = divisore_minimo(n);
	return 0;
}