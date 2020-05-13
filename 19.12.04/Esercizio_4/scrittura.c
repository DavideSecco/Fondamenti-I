#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include "scrittura.h"

int scrivimaiuscolo(const char *filename)
{
	FILE *f = fopen(filename, "r");
	if (f == NULL)
		return 0;

	fseek(f, 0, SEEK_END);
	int pos = ftell(f);
	char c;
	rewind(f);

	for (int i = 0; i < pos; i++)
	{
		// prima possibilità:
		fscanf(f, "%c", &c);
		// seconda possibilità:
		//c=fgetc(f);
		if(islower(c))
			c=toupper(c);
		printf("%c", c);
	}

	fclose(f);

	return 1;
}