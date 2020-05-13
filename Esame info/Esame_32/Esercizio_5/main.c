#include "stringhe.h"

int main(void)
{
	const char v[] = "ciao!";
	size_t n = 11;
	char c = '.';
	char *v2 = center(v, n, c);
	free(v2);
	return 0;
}