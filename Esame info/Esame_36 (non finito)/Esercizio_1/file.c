#include <stdbool.h>
#include <stdlib.h>

extern bool cifre_duplicate_oct(unsigned int n)
{
	if (n <= 8)
		return false;

	unsigned int *v=malloc(4);
	v[0] = n % 8;
	n = n / 8;


	int i = 0;
	
	do
	{
		i++;
		v = realloc(v, (i+1)*sizeof(unsigned int));
		v[i] = n % 8;
		n = n / 8;
	} while (n / 8 != 0);

	i++;
	v = realloc(v, (i + 1) * sizeof(unsigned int));
	v[i] = n % 8;

	for (int a = 0; a <= i; a++)
	{
		for (int b = 0; b <= i; b++)
		{
			if (v[b] == v[a] && a!=b)
			{
				free(v);
				return true;
			}
		}
	}
	free(v);
	return false;
}