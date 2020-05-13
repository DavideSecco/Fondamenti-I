#define  _CRT_SECURE_NO_WARNINGS

#include "shapes.h"

int main(void)
{
	FILE *f = fopen("line1.bin", "rb");
	struct line l;
	l.x1 = 10;
	l.x2 = 10;
	bool r = line_load(f, &l);
	fclose(f);
	return 0;
}