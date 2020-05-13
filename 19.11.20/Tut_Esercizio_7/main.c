#include <stdint.h>

uint32_t fibonacci(uint32_t n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	int n1 = 1;
	int n2 = 0;
	int n3;
	for (int i = 2; i <= n; i++)
	{
		n3 = n1 + n2;
		n2 = n1;
		n1 = n3;
	}
	return n3;
}

int main()
{
	uint32_t n=8;
	uint32_t ris;
	ris = fibonacci(n);
	return 0;
}