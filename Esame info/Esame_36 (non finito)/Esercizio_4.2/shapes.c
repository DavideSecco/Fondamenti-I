#include "shapes.h"

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool line_load(FILE *f, struct line *pln) {

	int i = 0;

	if (f == NULL)
		return false;
	while (feof(f) != 1) {

		fseek(f, 9 * i, SEEK_SET);

		size_t pos = ftell(f);

		size_t coordinate = 0;

		size_t spessore = 0;

		coordinate = fread(&pln, sizeof(int16_t), 4, f);

		spessore = fread(&pln->thickness, sizeof(uint8_t), 1, f);

		if ((coordinate + spessore) != 5) {
			return false;
		}

		i++;

	}
	return true;
}