#include <stdint.h>
#include <stdio.h>

uint32_t x_alla_x(uint32_t x)
{
	if (x == 0)
		return 0;
	uint32_t n = 1;
	for (size_t i =0; i < x; i++)
	{
		n = x * n;
	}
	return n;
}

int main()
{
	int n = 18; //la risposta alla domanda è 12
	double ris;
	for (int i = 10; i < n; i++)
	{
		ris = x_alla_x(i);
		printf("%d^%d = %e\n", i, i, ris);
	}
	return 0;
}