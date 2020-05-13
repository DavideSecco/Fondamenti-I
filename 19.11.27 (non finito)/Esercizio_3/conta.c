#include <stdlib.h>
#include <stdint.h>

size_t conta_parole(const char *s)
{
	size_t parole=0;
	int i = 0;
	if (s[0] == 0)
		return 0;
	while (s[i] != 0)
	{
		if (s[i] != ' ' && s[i+1]==' ') 
			parole = parole + 1;
		i++;
	}
	if (s[i-1] != ' ')
		parole = parole + 1;
	return parole;
}