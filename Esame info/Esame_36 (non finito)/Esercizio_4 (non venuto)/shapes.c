#include "shapes.h"

bool line_load(FILE *f, struct line *pln)
{
	size_t n_letti = -1;
	return true;
}

/*n_letti = fread(&pln->x1, sizeof(int16_t), 1, f);
	n_letti = fread(&pln->y1, sizeof(int16_t), 1, f);
	n_letti = fread(&pln->x2, sizeof(int16_t), 1, f);
	n_letti = fread(&pln->y2, sizeof(int16_t), 1, f);
	n_letti = fread(&pln->thickness, sizeof(uint8_t), 1, f);*/

#include "shapes.h"
bool line_load(FILE *f, struct line *pln) {

	int i = 0;

	while (feof(f) != 1) {


		fseek(f, 9 * i, SEEK_SET);

		size_t coordinate = 0;

		size_t spessore = 0;

		coordinate = fread(pln, sizeof(int16_t), 4, f);

		spessore = fread(pln, sizeof(uint8_t), 1, f);




		if ((coordinate + spessore) != 5) {
			return false;
		}

		i++;

	}
	return true;
}