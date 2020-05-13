#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

char *serpentino_encode(const char *s)
{
	if (s == NULL)
		return NULL;

	char *v = NULL;
	size_t a = 0;
	for (size_t i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u')
		{
			a = a + 3;
			v = realloc(v, (a + 1) * 1);
			v[a - 3] = s[i];
			v[a - 2] = 's';
			v[a - 1] = s[i];
		}
		else
		{
			a = a + 1;
			v = realloc(v, (a + 1) * 1);
			v[a - 1] = s[i];
		}
	}
	v[a] = '\0';
	return v;
}