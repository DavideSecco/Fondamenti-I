#include "matrix.h"

int main()
{
	double data_a[] = {
		1, 2,
		3, 1 };
	double data_b[] = {
		0, 3,
		2, 1 };
	struct matrix a = {2,2, data_a};
	struct matrix b = {2, 2, data_b};

	struct matrix *c = prod_kronecker(&a, &b); 
	return 0;
}