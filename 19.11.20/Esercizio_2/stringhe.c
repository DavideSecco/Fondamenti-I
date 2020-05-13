#include <stdlib.h>

char *concatena(const char *prima, const char *seconda)
{
	int i = 0;
	size_t h,y;
	for (y = 0; prima[y] != 0; y++);
	for (h = 0; seconda[h] != 0; h++);
	y = y + h + 1;
	char *t = malloc(y * sizeof(char));
	while (prima[i] != 0)
	{
		t[i] = prima[i];//=>      *(t+i)=
		i++;
	}
	int a = i;
	i = 0;
	while (seconda[i] != 0)
	{
		t[a + i] = seconda[i];
		i++;
	}
	t[a+i] = 0;
	return t;
}