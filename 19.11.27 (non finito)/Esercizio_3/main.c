#include <stdlib.h>
#include <stdint.h>

extern size_t conta_parole(const char *s);

int main()
{
	char s[] = "ciao come va tutto ok";
	size_t n;
	n = conta_parole(s);
	return 0;
}