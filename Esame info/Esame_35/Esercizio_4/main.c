#include "shapes.h"

int main()
{
	FILE *f = fopen("rect1.bin", "rb");
	struct rect r;
	rect_load(f, &r);
	fclose(f);
	return 0;
}