#include <stdlib.h>

extern void encrypt(char *s, unsigned int n);

int main()
{
	unsigned int n = 6;
	char *s = malloc(n * sizeof(char));;
	s[0] = 45;
	s[1] = 234;
	s[2] = 67;
	s[3] = 23;
	s[4] = 99;
	s[5] = 78;
	encrypt(s, n);
	encrypt(s, n);
	return 0;
}