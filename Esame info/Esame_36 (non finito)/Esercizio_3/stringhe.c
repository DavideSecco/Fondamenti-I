#include "stringhe.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *spacefill(const char *str, size_t n)
{
	if (str == NULL)
		return NULL;

	char *v = NULL;
	size_t len = strlen(str);
	v = malloc((len+1) * sizeof(char));
	int i=0;

	if (len >= n)
	{
		for (i = 0; i < len; i++)
		{
			v[i] = str[i];
		}
		v[i] = '\0';
		return v;
	}

	size_t spazi = n-len;
	int lung = spazi + len;
	v = realloc(v, (lung + 1) * sizeof(char));

	while (i < spazi)
	{
		v[i] = ' ';
		i++;
	}	

	int a = 0;

	while (i < lung)
	{
		v[i] = str[a];
		i++;
		a++;
	}

	v[i] = '\0';
	return v;
}