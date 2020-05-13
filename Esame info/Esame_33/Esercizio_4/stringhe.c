#include "stringhe.h"

char *title(const char *str)
{
	if (str == NULL)
		return NULL;

	size_t len = strlen(str);

	char *v = malloc((len+1) * sizeof(char));

	if (str[0] != ' ')
		v[0] = toupper(str[0]);
	else
		v[0] = ' ';

	for (size_t i = 1; i < len; i++)
	{
		if (str[i - 1] == ' ')
			v[i] = toupper(str[i]);
		else
			v[i] = str[i];
	}

	v[len] = '\0';

	return v;
}