#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
extern bool scrivi_intero(const char *prova, int i);

int main()
{
	bool r;
	int i = 51;
	char *file = "prova2.txt";
	r = scrivi_intero(file, i);
	return 0;
}