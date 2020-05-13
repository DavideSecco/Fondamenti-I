#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

size_t conta_cifre(unsigned long long n)
{
	size_t i = 0;
	while (n >= 1)
	{
		n = n / 10;
		i++;
	}
	return i;
}

bool cifre_duplicate(unsigned long long n)
{
	size_t n_cifre = conta_cifre(n);

	int *v = malloc(n_cifre * sizeof(int));

	for (size_t i = 0; i < n_cifre; i++)
	{
		v[i] = n % 10;
		n = n / 10;
	}

	for (size_t a = 0; a < n_cifre; a++)
	{
		for (size_t i = 0; i < n_cifre; i++)
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