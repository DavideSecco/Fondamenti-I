#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

extern char *parola_piu_lunga(const char *sz)
{
	char *v = NULL;

	if (sz == NULL)
		return NULL;

	size_t max_lung = 0;
	size_t len = strlen(sz);
	size_t p;
	size_t pos;
	for (size_t i = 0; i < len; i++)
	{
		if (sz[i] != ' ' && sz[i]!='\n')
		{
			p = i;
			size_t lung = 0;
			while ((sz[i]!=' ') && (i < len) && (sz[i]!='\n') && sz[i]!=EOF && sz[i]!='\t')
			{
				lung++;
				i++;
			}

			if (max_lung < lung)
			{
				max_lung=lung;
				pos = p;
			}
		}
	}

	v = malloc((max_lung+1) * sizeof(char));
	size_t i;
	for ( i = 0; i < max_lung; i++)
	{
		v[i] = sz[pos + i];
	}
	v[i] = '\0';

	return v;
}