#include "matrix.h"

#include <stdlib.h>
struct matrix *mat_constractor(struct matrix *trasp, size_t rows, size_t cols)
{
	trasp->cols = rows;
	trasp->rows = cols;
	trasp->data = malloc(rows*cols * sizeof(double));
	return trasp;
}

struct matrix *mat_transpose(const struct matrix *mat)
{
	struct matrix trasp;
	trasp.cols = mat->rows;
	trasp.rows = mat->cols;
	trasp.data = malloc(trasp.cols*trasp.rows *sizeof(double));
	for (size_t r = 0; r < trasp.rows; r++)
	{
		for (size_t c = 0; c < trasp.cols; c++)
		{
			trasp.data[trasp.cols*r + c] = mat->data[c*mat->cols + r];
		}
	}
	struct matrix *p = malloc(sizeof(struct matrix));
	*p = trasp;
	return p;
}