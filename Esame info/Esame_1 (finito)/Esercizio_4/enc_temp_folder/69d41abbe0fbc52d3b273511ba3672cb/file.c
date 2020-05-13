#include <math.h>

int conta_c(unsigned int n)
{
	int i = 0;
	while (n >= 1)
	{
		n = n / 10;
		i++;
	}
	return i;
}

int pot_10(int n)
{
	int pot = 1;
	int i = 0;
	while (i < n)
	{
		i++;
		pot = pot * 10;
	}
	return pot;
}

unsigned int inverti(unsigned int i)
{
	int n_cifre = conta_c(i);
	unsigned int num = 0;
	for (int a = 0; a < n_cifre; a++)
	{
		int cifra = i % 10;
		i = i / 10;
		num = cifra * pot_10(n_cifre-a-1) + num;
	}
	return num;;
}
