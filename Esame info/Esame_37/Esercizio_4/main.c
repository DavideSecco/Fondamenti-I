#include "rapporti.h"

int main()
{
	const char file[] = "rapporto1.bin";
	uint16_t n;
	struct rapporto *v = leggi_rapporti(file, &n);
	return 0;
}