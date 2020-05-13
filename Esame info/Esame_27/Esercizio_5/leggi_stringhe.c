#define _CRT_SECURE_NO_WARNINGS

#include "leggi_stringhe.h"

char **leggi_stringhe(const char *filename, size_t *size)
{

	FILE *f = fopen(filename, "rb");
	if (f == NULL)
	{
		*size = 0;
		return NULL;
	}
	char **v = NULL;
	int i = 0;
	
	while (1)
	{
		char c = fgetc(f);
		if (c == EOF)
			break;
		else if (c == 0)
			i++;
	}

	if (i==0)
	{
		*size = 0;
		return NULL;
	}

	*size = i;
	v = malloc(*(size+1) * sizeof(char));
	rewind(f);
	for (size_t i = 0; i < *size; i++)
	{
		v[i] = NULL;
		size_t a = 0;
		while (1)
		{
			char c = fgetc(f);
			if (c == EOF)
				break;
			v[i] = realloc(v[i], (a+1) * sizeof(char));
			if (c == '\0')
			{
				v[i][a] = c;
				break;
			}
			v[i][a] = c;
			a++;
		}
	}
	return v;
}