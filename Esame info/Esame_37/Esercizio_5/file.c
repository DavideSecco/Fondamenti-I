#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

unsigned int irpef(unsigned int stipendio, unsigned int *scaglioni,	unsigned int *aliquote, size_t n)
{
	size_t i;
	size_t pos;
	for (i = 0; i < n; i++)
	{
		if (stipendio < scaglioni[i])
		{
			pos = i;
			break;
		}
		else if (stipendio > scaglioni[n - 1])
		{
			pos = n - 1;
			break;
		}
	}

	unsigned int tasse = 0;

	for (i = 1; i <=pos; i++)
	{
		size_t tasse2 = (scaglioni[i]-scaglioni[i-1])*((float)aliquote[i - 1]/100);
		tasse = tasse + tasse2;
	}

	size_t tasse2 = (stipendio - scaglioni[i])*(((float)aliquote[i-1] / 100));
	tasse = tasse + tasse2;
	return tasse;
}