#include "trova.h"

int trova_diverso_dalla_fine(const char *str, char c)
{
	if (str == NULL)
		return -1;

	int len = strlen(str);

	int i = 0;
	for (i = len - 1; i >= 0; i--)
	{
		if (str[i] != c)
			return i;
	}

	return -1;
}