#include <stdlib.h>

size_t conta_spazi(const char* s) {
	size_t sh=0, i=0;
	while (s[i] != 0) {
		if (s[i] == ' ') {
			sh++;
		}
	i++;
	}
	return sh;
}
