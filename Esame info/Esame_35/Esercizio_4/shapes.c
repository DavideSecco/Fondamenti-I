#define _CRT_SECURE_NO_WARNINGS

#include "shapes.h"

extern bool rect_load(FILE *f, struct rect *r)
{
	fread(r, sizeof(int16_t), 2, f);
	fread(&r->width, sizeof(uint16_t), 2, f);
	fread(&r->symbol, sizeof(char), 1, f);
	return true;
}