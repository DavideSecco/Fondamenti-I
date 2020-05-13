#include "stringhe.h"

int main()
{
	char v[] = "ciao";
	int n = 10;
	char *v2 = zfill(v, n);
	free(v2);
	return 0;
}