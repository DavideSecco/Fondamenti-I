#include <stdlib.h>
#include <stdint.h>

uint8_t *tabellina(uint8_t n)
{
	if (n > 12)
		return NULL;
	int i = 0;
	uint8_t *p = malloc(10 * sizeof(uint8_t));
	for (i = 0; i < 10; i++)
	{
		p[i] = n * i;
	}
	return p;
}

int main()
{
	uint8_t n = 6;
	uint8_t *p;
	p = tabellina(n);
	free(p);
	return 0;
}
