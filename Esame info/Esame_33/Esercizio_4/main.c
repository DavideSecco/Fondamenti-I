#include "stringhe.h"

int main(void)
{
	char v[] = "  ciao!  ";
	char *v2 = title(v);
	free(v2);
	return 0;
}