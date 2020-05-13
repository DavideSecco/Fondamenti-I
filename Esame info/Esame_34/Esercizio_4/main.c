#include "rational.h"

int main()
{
	struct rational num = { 1,2 };
	struct rational den = { 1,2 };
	struct rational somma;
	rational_sum(&somma, &num, &den);
	return 0;
}