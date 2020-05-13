#include <stdlib.h>
#include <stdint.h>

#include "geometria.h"

int main()
{
	struct punto p1 = { 1, 0 };
	struct punto p2 = { 0, 0 };
	struct punto p3 = { 0, 0 };
	int r;
	r = colineari(p1, p2, p3);
	return 0;
}