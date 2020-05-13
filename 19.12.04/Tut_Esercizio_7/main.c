#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char *maiusc_stringa(char *s)
{
	char *punt = (NULL);
	int i = 0;
	while (s[i] != 0)
	{
		punt = realloc(punt,(i+1) * sizeof(char));
		if (islower(s[i]))
			punt[i] = toupper(s[i]);
		else
			punt[i] = s[i];
		i++;
	}
	printf("%s", punt);
	return punt;
}

int main()
{
	char s[] = "ciao come va?";
	char *punt;
	punt = maiusc_stringa(s);
	free(punt);
	return 0;
}