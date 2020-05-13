#include "matrix.h"

struct matrix *new_matrix(struct matrix *c, size_t rig, size_t col)
{
	c->cols = col;
	c->rows = rig;
	c->data = malloc(rig*col * sizeof(double));
	return c;
}

struct matrix *prod_kronecker(const struct matrix *a, const struct matrix *b)
{
	if (a == NULL || b == NULL)
		return NULL;

	struct matrix *c = malloc(sizeof(struct matrix));
	size_t righe = (a->rows*b->rows);
	size_t colonne = (a->cols*b->cols);
	c = new_matrix(c, righe, colonne);

	for (size_t r = 0; r < righe; r++)
	{
		for (size_t col = 0; col < colonne; col++)
		{
			c->data[r+col] = a->data[r] * b->data[col];
		}
	}
	return c;
}