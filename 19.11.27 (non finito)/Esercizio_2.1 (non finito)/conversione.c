#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

unsigned int contacifre(unsigned int n)
{
	int i = 1;
	while (n > 1)
	{
		if (n < 10)
			break;
		n = n / 10;
		i = i + 1;
	}
	return i;
}

char *converti(unsigned int n)
{
	int i = contacifre(n);
	char *f = malloc(i * sizeof(int));
	int resto;
	for (int a = 1; a <= i; a++)
	{
		resto = n % 10;
		n = n / 10;
		sprintf(f[i - a], "%d", resto); //qui c'è problema, come si fa con sprintf?
	}
	return f;
}
