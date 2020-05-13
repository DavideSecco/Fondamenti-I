#include <stdlib.h>

int ismultiple(int a, int b)
{
	if (a == 0 || b == 0)
		return 0;
	if (a >= b && a%b == 0)
		return 1;
	if (a < b && b%a == 0)
		return 2;
	else
		return 0;
}
int *rimuovi_multipli(const int *v, size_t size, size_t *newsize)
{
	if (v == NULL)
	{
		*newsize = 0;
		return NULL;
	}
	int *v_copy = malloc(size*sizeof(int));
	for (size_t i = 0; i < size; i++)
		v_copy[i] = v[i];

	for (size_t i = 0; i < size; i++)
	{
		for (size_t a = 0; a < size; a++)
		{
			int var1 = v_copy[a];
			int var2 = v_copy[i];
			int ris = ismultiple(var1, var2);
			if (ris == 1 && a!=i)
				v_copy[a] = 0;
			if (ris == 2)
				v_copy[i] = 0;
		}
	}

	*newsize = 0;
	int *v_fin = malloc(*(newsize+1)*(sizeof(int)));
	size_t a = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (v_copy[i] != 0)
		{
			*newsize = *newsize + 1;
			v_fin = realloc(v_fin, (*newsize)*(sizeof(int)));
			v_fin[a] = v_copy[i];
			a++;
		}
	}
	free(v_copy);
	return v_fin;
}