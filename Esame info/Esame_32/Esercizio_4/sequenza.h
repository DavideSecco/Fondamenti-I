#if !defined SEQUENZA_H
#define SEQUENZA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

struct seq {
	size_t len;
	uint16_t *values;
};

extern bool seq_load(const char *filename, struct seq *s);

#endif // SEQUENZA_H
