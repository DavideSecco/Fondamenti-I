#include <stdlib.h>
#include <stdint.h>

void raddoppia_tre(uint32_t *v) {
	int i = 0;
	for (i = 0; i < 3; i++) {
		*v = *v * 2;
		v = v + 1;
	}

}

int main()
{
	uint32_t *v = malloc(3 * sizeof(uint32_t));
	v[0] = 12;
	v[1] = 59;
	v[2] = 83;
	raddoppia_tre(v);
	free(v);
	return 0;
}