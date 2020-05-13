#include <stdio.h>

extern void stampa_tavola_pitagorica(FILE *f, unsigned int n);

int main(void)
{
	FILE *f = fopen("file1.txt", "w");
	unsigned int n = 5;
	stampa_tavola_pitagorica(f, n);
	fclose(f);
	return 0;
}