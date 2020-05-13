#include "matrix.h"

struct matrix *new_matrix(struct matrix *c, size_t righe, size_t colonne)
{
	c->rows = righe;
	c->cols = colonne;
	c->data = malloc(righe*colonne * sizeof(double));
	return c;
}

struct matrix *mat_permute_rows(const struct matrix *m, const size_t *p)
{
	struct matrix *c = malloc(sizeof(struct matrix));

	c = new_matrix(c, m->rows, m->cols);
 
	size_t len = m->rows;
	size_t i = 0;
	for (size_t i = 0 , r = 0; i < m->rows; r++, i++)
	{
		for (size_t col = 0; col < m->cols; col++)
		{
			c->data[r*m->cols + col] = m->data[p[i]*m->cols + col];
		}
	}

	return c;
}