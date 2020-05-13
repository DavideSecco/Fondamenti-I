#if !defined MATRIX_H
#define MATRIX_H

#include <stdbool.h>
#include <ctype.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct matrix {
	size_t rows, cols;
	double *data;
};

extern struct matrix *prod_kronecker(const struct matrix *a, const struct matrix *b);;

#endif
