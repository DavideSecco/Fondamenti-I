#include "stdlib.h"

unsigned int conta_spazi(const char* s)
{
	int i = 0;
	unsigned int spazi = 0;
	if (s == NULL)
		return 0;
	while (s[i] != 0)
	{
		if (s[i] == ' ')
			spazi++;
		i++;
	}
	return spazi;
}