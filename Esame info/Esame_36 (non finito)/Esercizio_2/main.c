#include <stdlib.h>

extern int *rimuovi_multipli(const int *v, size_t size, size_t *newsize);

int main(void)
{
	size_t dim;
	int vet[5] = { 2, 3, 4, 5, 6 };
	int *v = rimuovi_multipli(vet, 5, &dim);
	return 0;
}