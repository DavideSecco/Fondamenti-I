//se in tutti i casi funziona ma alla fine da errore: "memory leak" e dice
//"main non terminato correttamente" com'è valutato?

#include <stdlib.h>

int *trova_cifre(unsigned int num)
{
	int *v = NULL;
	int i = 0;
	while (num >= 1)
	{
		v = realloc(v, (i + 1) * sizeof(int));
		v[i] = num % 10;
		num = num / 10;
		i++;
	}
	return v;
}

int conta_cifre(unsigned int num)
{
	int cont = 0;
	while (num >= 1)
	{
		num = num / 10;
		cont++;
	}
	return cont;
}

int felice(unsigned int num)
{
	if (num == 0)
		return 0;

	while (1)
	{
		int n_cifre = conta_cifre(num);
		int *cifre = trova_cifre(num);
		int new_num = 0;
		for (int i=0; i < n_cifre; i++)
		{
			new_num = new_num + cifre[i]*cifre[i];
		}
		if (new_num == 1)
		{
			free(cifre);
			return 1;
		}
		if (new_num == 4)
		{
			free(cifre);
			return 0;
		}
		free(cifre);
		num = new_num;
	}
}
