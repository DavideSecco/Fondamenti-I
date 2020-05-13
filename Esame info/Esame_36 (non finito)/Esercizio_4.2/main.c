#define  _CRT_SECURE_NO_WARNINGS

#include "shapes.h"

int main(void)
{
	FILE *f = fopen("line1.bin", "rb");
	struct line l;
	bool r = line_load(f, &l);
	fclose(f);
	return 0;
}