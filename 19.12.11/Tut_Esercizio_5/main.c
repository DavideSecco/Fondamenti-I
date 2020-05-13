#include <stdlib.h>

char *sostituisci_spazi(const char *s, char c)
{
	size_t i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	char *no_spazi = malloc(i * sizeof(char));
	size_t a;
	for (a = 0; a < i; a++)
	{
		if (s[a] == ' ')
			no_spazi[a] = c;
		else
			no_spazi[a] = s[a];
	}
	no_spazi[a] = '\0';
	return no_spazi;
}

int main()
{
	char c = 'a';
	char stringa[] = "C'era una volta";
	char *no_spazi;
	no_spazi = sostituisci_spazi(stringa, c);
	free(no_spazi);
	return 0;
}