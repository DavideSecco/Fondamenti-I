#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

extern bool cifre_duplicate_hex(unsigned int n)
{
	char *v = NULL;
	int i = 0, a=0;

	while (n >= 1)
	{
		v = realloc(v, (i + 1) * sizeof(int));
		v[i] = n % 16;
		n = n / 16;
		i++;
	}

	int max = i;

	for (i = 0; i < max; i++)
	{
		for (a = 0; a < max; a++)
		{
			if (v[i] == v[a] && a != i)
			{
				free(v);
				return true;
			}
		}
	}
	free(v);
	return false;
}