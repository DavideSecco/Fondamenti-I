#include <stdbool.h>
#include <ctype.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void stampa_cornicetta(const char *s)
{
	int len;
	if (s == NULL)
		len = 6;
	else
		len = strlen(s);
	

	//prima riga
	printf("+===");

	for (int i = 0; i < len; i++)
		printf("=");
	printf("===+\n");

	//seconda riga
	printf("| *-");
	for (int i = 0; i < len; i++)
		printf("-");
	printf("-* |\n");

	//terza riga
	printf("| | %s | |\n", s);

	//penultima riga (quarta)
	printf("| *-");
	for (int i = 0; i < len; i++)
		printf("-");
	printf("-* |\n");

	//ultima riga (quinta)
	printf("+===");
	for (int i = 0; i < len; i++)
		printf("=");
	printf("===+\n");

}