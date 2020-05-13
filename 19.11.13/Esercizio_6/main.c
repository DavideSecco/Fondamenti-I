#include <stdlib.h>

extern unsigned int conta_spazi(const char* s);

int main()
{
	char s[] = "s e c c o + m hbat";
	size_t len;

	len = conta_spazi(s);
	return 0;
}