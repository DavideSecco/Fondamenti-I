#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
char *trim(char *s)
{
	int i=0;
	char *p = NULL;
	if (s == NULL)
		return NULL;
	
	while (s[i] == ' ')
	{
		i++;
	}

	int inizio = i; //pos inizio lettere

	while (s[i] != 0)
	{
		i++;
	}

	int fine = i-1; //pos ultimo carattere compresi spazi

	while (s[fine] == ' ')
	{
		fine--;
	}
	 //ultimo carattere che non sia uno spazio
	i = 0;
	while ((inizio + i) <= fine)
	{
		p = realloc(p, (i + 1) * sizeof(char));
		p[i] = s[i + inizio];
		i++;
	}
	p = realloc(p, (i + 1) * sizeof(char));
	p[i] = '\0';
	return p;
}