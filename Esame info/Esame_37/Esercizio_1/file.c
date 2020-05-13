#define _CRT_SECURE_NO_WARNINGS

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

size_t contanumeri(const char* nomefile)
{
	FILE *f = fopen(nomefile, "r");
	size_t i = 0;
	while (1)
	{
		char c;
		c=fgetc(f);
		if (c == EOF)
			break;
		else if (isdigit(c))
			i++;
	}
	fclose(f);
	return i;
}