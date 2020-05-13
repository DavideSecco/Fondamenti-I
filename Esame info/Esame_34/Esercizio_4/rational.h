#if !defined RATIONAL_H
#define RATIONAL_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

struct rational {
	int num;
	unsigned int den;
};

extern void rational_sum(struct rational *sum, const struct rational *first, const struct rational *second);

#endif
