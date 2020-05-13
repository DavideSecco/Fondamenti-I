#include <stdlib.h>

unsigned int conta_spazi(const char* s)
{
	size_t len = 0;
	int i = 0;
	while (s[i] != 0)
	{
		if (s[i] == ' ')
			len = len + 1;
			i++;
	}
	return len;
}