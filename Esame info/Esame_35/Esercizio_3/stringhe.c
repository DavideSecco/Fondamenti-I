#include "stringhe.h"

extern char *zfill(const char *str, size_t n)
{
	if (str == NULL)
		return NULL;

	size_t len = strlen(str);
	size_t i = 0;
	size_t diff = n - len;
	char *v = NULL;
	if (len >= n)
	{
		v = malloc((len+1) * sizeof(char));
		while (i < len)
		{
			v[i] = str[i];
			i++;
		}
	}
	else
	{
		v = malloc((n +1)* sizeof(char));
		while (i < diff)
		{
			v[i] = '0';
			i++;
		}

		while (i < n)
		{
			v[i] = str[i-diff];
			i++;
		}
	}
	v[i] = '\0';
	return v;
}