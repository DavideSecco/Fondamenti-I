#include "tirocini.h"
#include <time.h>

int main(void)
{
	clock_t start, end;
	double tempo;
	start = clock();

	FILE  *f=fopen("input1.txt", "r");
	struct tirocinio p;
	bool r = tirocinio_load(f, &p);
	fclose(f);

	end = clock();
	tempo = ((double)(end - start)) / CLOCKS_PER_SEC;
	return 0;
}