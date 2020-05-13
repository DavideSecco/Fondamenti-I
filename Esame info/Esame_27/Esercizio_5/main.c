#include "leggi_stringhe.h"

int main()
{
	char f[]= "file5.bin";
	size_t size;
	char **v = leggi_stringhe(f, &size);
	return 0;
}