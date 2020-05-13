#include <stdlib.h>

extern size_t conta_spazi(const char* s);

int main(void) {
	char v[] = "ciao ciao ciao";
		size_t nds = conta_spazi(v);
		return 0;
}