#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

extern char *parola_piu_lunga(const char *sz);

int main()
{
	char *v = "uno \n   due!  \n	tre!!";
	printf("%s", v);
	char *v2 = parola_piu_lunga(v);
	return 0;
}