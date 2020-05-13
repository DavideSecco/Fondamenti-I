#include "matrix.h"

int main(void)
{
	size_t r = 2;
	size_t c = 3;
	double data[] = { 1,2,3,4,5,6, };
	const struct matrix mat = { r, c, data};
	struct matrix *tras;
	//tras = mat_constructor(tras, 2, 3);
	tras = mat_transpose(&mat);
	return 0;
}