#include <stdlib.h>
#include <stdint.h>

#include "complessi.h"

int main()
{
	struct complesso x = { 1,1 };
	struct complesso y = { 2,2 };
	prodotto_complesso(&x, &y);
	return 0;
}