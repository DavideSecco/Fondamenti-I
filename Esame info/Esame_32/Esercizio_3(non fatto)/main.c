#include "matrix.h"

int main(void)
{
	double data_a[] = { 1,2,3,
						4,5,6,
						7,8,9 };

	struct matrix a = { 3,3, data_a};

	size_t v[] = { 2,1,0 };

	struct matrix *ris = mat_permute_rows(&a, v);

	return 0;
}