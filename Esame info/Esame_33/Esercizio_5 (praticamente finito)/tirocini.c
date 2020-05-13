#include "tirocini.h"

char *carica(FILE *f, char *v)
{
	if (f == NULL)
		return false;

	v = NULL;
	size_t i = 0;
	char c;

	while (1)
	{
		c = fgetc(f);
		if (c != ',' && c!='\n' && c!=EOF)
		{
			v = realloc(v, (i + 1) * sizeof(char));
			v[i] = c;
			i++;
		}
		else
			break;
	}
	v = realloc(v, (i + 1) * sizeof(char));
	v[i] = '\0';
	return v;
}

bool tirocinio_load(FILE *f, struct tirocinio *t)
{
	if (f == NULL)
		return false; 

	t->nome = carica(f, t->nome);
	t->azienda1 = carica(f, t->azienda1);		
	t->azienda2 = carica(f, t->azienda2);
	t->azienda3 = carica(f, t->azienda3);
	
	return true;
}