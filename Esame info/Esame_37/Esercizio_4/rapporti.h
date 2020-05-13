#if !defined RAPPORTI_H
#define RAPPORTI_H

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

struct rapporto {
	uint16_t id;
	char tipo;
	float valore;
};

extern struct rapporto *leggi_rapporti(const char *filename, uint16_t *n);

#endif
