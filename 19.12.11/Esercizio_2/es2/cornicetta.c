#include <stdio.h>
#include <string.h>

void stampa_cornicetta(const char *s)
{
	size_t lung = strlen(s);

	printf("/");
	for (size_t i = 0; i < lung + 2; i++)
	{
		printf("-");
	}

	printf("\\\n| %s |\n\\", s);

	for (size_t i = 0; i < lung + 2; i++)
	{
		printf("-");
	}

	printf("/\n");


}