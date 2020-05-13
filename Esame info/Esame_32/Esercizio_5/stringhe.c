#include "stringhe.h"

extern char *center(const char *str, size_t n, char c)
{
	if (str == NULL)
		return NULL;

	char *v2 = NULL;
	size_t len = strlen(str);
	size_t i = 0;

	if (len >= n)
	{
		v2 = malloc((len + 1) * sizeof(char));
		while (i < len)
		{
			v2[i] = str[i];
			i++;
		}
		v2[i] = '\0';
		return v2;
	}

	v2 = malloc((n + 1) * sizeof(char));

	if ((len % 2 == 0 && n % 2 == 0) || (len % 2 == 1 && n % 2 == 1))
	{
		size_t extra = (n - len) / 2;

		for (; i < extra; i++)
		{
			v2[i] = c;
		}

		while (i < (extra + len))
		{
			v2[i] = str[i - extra];
			i++;
		}

		for (; i < n; i++)
		{
			v2[i] = c;
		}
	}

	if (len % 2 == 1 && n % 2 == 0)
	{
		size_t extra = (n - len) / 2;

		for (; i < extra; i++)
		{
			v2[i] = c;
		}

		while (i < (extra + len))
		{
			v2[i] = str[i - extra];
			i++;
		}

		for (; i < n; i++)
		{
			v2[i] = c;
		}
	}

	if (len % 2 == 0 && n % 2 == 1)
	{
		size_t extra = (n - len) / 2+1;

		for (; i < extra; i++)
		{
			v2[i] = c;
		}

		while (i < (extra + len))
		{
			v2[i] = str[i - extra];
			i++;
		}

		for (; i < n; i++)
		{
			v2[i] = c;
		}
	}

	v2[i] = '\0';
	return v2;
}