#include <stdlib.h>
#include <stdint.h>

void raddoppia_tre(uint32_t *v, int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		*v = *v * 2;
		v = v + 1;
	}

}

int main()
{
	int n = 5;
	uint32_t *v = malloc(n * sizeof(uint32_t));
	v[0] = 12;
	v[1] = 59;
	v[2] = 83;
	v[3] = 34;
	v[4] = 10;
	raddoppia_tre(v, n);
	free(v);
	return 0;
}